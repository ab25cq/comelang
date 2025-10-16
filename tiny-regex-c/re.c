/*
 *
 * Mini regex-module inspired by Rob Pike's regex code described in:
 *
 * http://www.cs.princeton.edu/courses/archive/spr09/cos333/beautiful.html
 *
 *
 *
 * Supports:
 * ---------
 *   '.'        Dot, matches any character
 *   '^'        Start anchor, matches beginning of string
 *   '$'        End anchor, matches end of string
 *   '*'        Asterisk, match zero or more (greedy)
 *   '+'        Plus, match one or more (greedy)
 *   '?'        Question, match zero or one (non-greedy)
 *   '[abc]'    Character class, match if one of {'a', 'b', 'c'}
 *   '[^abc]'   Inverted class, match if NOT one of {'a', 'b', 'c'} -- NOTE: feature is currently broken!
 *   '[a-zA-Z]' Character ranges, the character set of the ranges { a-z | A-Z }
 *   '\\s'       Whitespace, \t \f \r \n \v and spaces
 *   '\\S'       Non-whitespace
 *   '\\w'       Alphanumeric, [a-zA-Z0-9_]
 *   '\\W'       Non-alphanumeric
 *   '\\d'       Digits, [0-9]
 *   '\\D'       Non-digits
 *   '()'        Grouping, allowing quantifiers on sub-expressions and capture reporting
 *
 *
 */

#include "re.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>

/* Definitions: */

#define MAX_REGEXP_OBJECTS   64   /* Max number of regex symbols in expression, incl. groups. */
#define MAX_CHAR_CLASS_LEN   40   /* Max length of character-class buffer.                    */
#define MAX_CAPTURE_SLOTS    MAX_REGEXP_OBJECTS


enum
{
  UNUSED,
  DOT,
  BEGIN,
  END,
  QUESTIONMARK,
  STAR,
  PLUS,
  CHAR,
  CHAR_CLASS,
  INV_CHAR_CLASS,
  DIGIT,
  NOT_DIGIT,
  ALPHA,
  NOT_ALPHA,
  WHITESPACE,
  NOT_WHITESPACE,
  GROUP
};


typedef struct regex_t regex_t;

struct regex_t
{
  unsigned char type;   /* CHAR, STAR, GROUP, etc. */
  union
  {
    unsigned char  ch;      /* Literal character                 */
    unsigned char* ccl;     /* Pointer to characters in a class  */
    struct
    {
      regex_t* first;       /* First token inside the group      */
      int      id;          /* Capture index (1-based)           */
    } group;
  } u;
  regex_t* next;            /* Linked list pointer for sequence  */
};


typedef struct re_program
{
  regex_t*       start;
  int            group_count;
} regex_program_t;


typedef struct
{
  regex_t*        pool;
  int             pool_capacity;
  int             pool_size;
  unsigned char*  ccl_buf;
  int             ccl_capacity;
  int             ccl_idx;
  int             group_count;
} compiler_state;


typedef struct
{
  const char* base;
  re_capture* captures;
  int         capture_capacity;   /* Slots provided by caller */
  int         total_groups;       /* Groups present in pattern */
} match_context;


/* Private function declarations: */
static const char* matchpattern(regex_t* pattern, const char* text, match_context* ctx);
static const char* matchtoken(regex_t* token, const char* text, match_context* ctx);
static const char* matchstar(regex_t* token, regex_t* rest, const char* text, match_context* ctx);
static const char* matchplus(regex_t* token, regex_t* rest, const char* text, match_context* ctx);
static const char* matchquestion(regex_t* token, regex_t* rest, const char* text, match_context* ctx);
static int         matchcharclass(char c, const char* str);
static int         matchdigit(char c);
static int         matchalpha(char c);
static int         matchwhitespace(char c);
static int         matchmetachar(char c, const char* str);
static int         matchrange(char c, const char* str);
static int         matchdot(char c);
static int         matchalphanum(char c);
static int         ismetachar(char c);
static regex_t*    compile_sequence(compiler_state* st, const char* pattern, int* pos, int in_group);
static regex_t*    new_token(compiler_state* st);
static int         append_token(regex_t** head, regex_t** tail, regex_t* token);
static void        re_print_internal(regex_t* pattern, int depth);
static void        snapshot_captures(const match_context* ctx, re_capture* buffer);
static void        restore_captures(match_context* ctx, const re_capture* buffer);
static void        clear_captures(match_context* ctx);


/* Public functions: */
int re_match(const char* pattern, const char* text, int* matchlength)
{
  return re_matchp(re_compile(pattern), text, matchlength, 0, 0);
}

int re_matchp(re_t pattern, const char* text, int* matchlength, re_capture* captures, int max_captures)
{
  *matchlength = 0;
  if (pattern == 0)
  {
    return -1;
  }

  regex_program_t* program = (regex_program_t*) pattern;
  regex_t* start = program->start;
  if (start == 0)
  {
    return -1;
  }

  match_context ctx;
  ctx.base = text;
  ctx.captures = (captures != 0 && max_captures > 0) ? captures : 0;
  ctx.capture_capacity = (captures != 0 && max_captures > 0) ? max_captures : 0;
  if (ctx.capture_capacity > MAX_CAPTURE_SLOTS)
  {
    ctx.capture_capacity = MAX_CAPTURE_SLOTS;
  }
  ctx.total_groups = program->group_count;

  if (ctx.captures != 0)
  {
    clear_captures(&ctx);
  }

  if (start->type == BEGIN)
  {
    const char* end = matchpattern(start->next, text, &ctx);
    if (end != 0)
    {
      *matchlength = (int)(end - text);
      if (ctx.captures != 0)
      {
        /* Groups already recorded relative to ctx.base */
      }
      return 0;
    }
    return -1;
  }
  else
  {
    const char* cursor = text;
    while (1)
    {
      if (ctx.captures != 0)
      {
        clear_captures(&ctx);
      }

      const char* end = matchpattern(start, cursor, &ctx);
      if (end != 0)
      {
        if (*cursor == '\0' && cursor != text)
        {
          return -1; /* Preserve legacy behaviour */
        }
        *matchlength = (int)(end - cursor);
        return (int)(cursor - text);
      }

      if (*cursor == '\0')
      {
        break;
      }
      cursor += 1;
    }
  }

  return -1;
}

re_t re_compile(const char* pattern)
{
  static regex_t        re_compiled[MAX_REGEXP_OBJECTS];
  static unsigned char  ccl_buf[MAX_CHAR_CLASS_LEN];
  static regex_program_t program;

  compiler_state state;
  state.pool = re_compiled;
  state.pool_capacity = MAX_REGEXP_OBJECTS;
  state.pool_size = 0;
  state.ccl_buf = ccl_buf;
  state.ccl_capacity = MAX_CHAR_CLASS_LEN;
  state.ccl_idx = 1; /* leave first slot unused to mimic original behaviour */
  state.group_count = 0;

  if (state.ccl_capacity > 0)
  {
    state.ccl_buf[0] = 0;
  }

  int pos = 0;
  regex_t* head = compile_sequence(&state, pattern, &pos, 0);
  if ((head == 0) || (pattern[pos] != '\0'))
  {
    return 0;
  }

  program.start = head;
  program.group_count = state.group_count;
  return (re_t) &program;
}


void re_print(re_t pattern)
{
  if (pattern == 0)
  {
    return;
  }

  regex_program_t* program = (regex_program_t*) pattern;
  if (program->start == 0)
  {
    return;
  }

  re_print_internal(program->start, 0);
}


/* Private helper implementations */
static void clear_captures(match_context* ctx)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  for (int i = 0; i < ctx->capture_capacity; ++i)
  {
    ctx->captures[i].start = -1;
    ctx->captures[i].length = 0;
  }
}

static void snapshot_captures(const match_context* ctx, re_capture* buffer)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  memcpy(buffer, ctx->captures, sizeof(re_capture) * ctx->capture_capacity);
}

static void restore_captures(match_context* ctx, const re_capture* buffer)
{
  if ((ctx->captures == 0) || (ctx->capture_capacity <= 0))
  {
    return;
  }

  memcpy(ctx->captures, buffer, sizeof(re_capture) * ctx->capture_capacity);
}


static regex_t* new_token(compiler_state* st)
{
  if (st->pool_size >= st->pool_capacity)
  {
    return 0;
  }

  regex_t* token = &st->pool[st->pool_size++];
  token->type = UNUSED;
  token->u.ccl = 0;
  token->next = 0;
  token->u.group.first = 0;
  token->u.group.id = 0;
  return token;
}

static int append_token(regex_t** head, regex_t** tail, regex_t* token)
{
  if (token == 0)
  {
    return 0;
  }

  if (*head == 0)
  {
    *head = token;
  }
  else
  {
    (*tail)->next = token;
  }
  *tail = token;
  return 1;
}

static regex_t* compile_sequence(compiler_state* st, const char* pattern, int* pos, int in_group)
{
  regex_t* head = 0;
  regex_t* tail = 0;

  while (pattern[*pos] != '\0')
  {
    char c = pattern[*pos];

    if (in_group && (c == ')'))
    {
      break;
    }

    regex_t* token = 0;

    switch (c)
    {
      case '^':
      {
        token = new_token(st);
        if (token == 0) return 0;
        token->type = BEGIN;
        (*pos)++;
      } break;

      case '$':
      {
        token = new_token(st);
        if (token == 0) return 0;
        token->type = END;
        (*pos)++;
      } break;

      case '.':
      {
        token = new_token(st);
        if (token == 0) return 0;
        token->type = DOT;
        (*pos)++;
      } break;

      case '*':
      {
        token = new_token(st);
        if (token == 0) return 0;
        token->type = STAR;
        (*pos)++;
      } break;

      case '+':
      {
        token = new_token(st);
        if (token == 0) return 0;
        token->type = PLUS;
        (*pos)++;
      } break;

      case '?':
      {
        token = new_token(st);
        if (token == 0) return 0;
        token->type = QUESTIONMARK;
        (*pos)++;
      } break;

      case '\\':
      {
        (*pos)++;
        if (pattern[*pos] == '\0')
        {
          return 0;
        }

        token = new_token(st);
        if (token == 0) return 0;

        switch (pattern[*pos])
        {
          case 'd': token->type = DIGIT;          break;
          case 'D': token->type = NOT_DIGIT;      break;
          case 'w': token->type = ALPHA;          break;
          case 'W': token->type = NOT_ALPHA;      break;
          case 's': token->type = WHITESPACE;     break;
          case 'S': token->type = NOT_WHITESPACE; break;
          default:
          {
            token->type = CHAR;
            token->u.ch = (unsigned char)pattern[*pos];
          } break;
        }
        (*pos)++;
      } break;

      case '[':
      {
        int buf_begin = st->ccl_idx;
        int negated = 0;
        (*pos)++;

        if (pattern[*pos] == '^')
        {
          negated = 1;
          (*pos)++;
          if (pattern[*pos] == '\0')
          {
            return 0;
          }
        }

        if (pattern[*pos] == '\0')
        {
          return 0;
        }

        while ((pattern[*pos] != '\0') && (pattern[*pos] != ']'))
        {
          if (pattern[*pos] == '\\')
          {
            if (st->ccl_idx >= (st->ccl_capacity - 1))
            {
              return 0;
            }
            st->ccl_buf[st->ccl_idx++] = '\\';
            (*pos)++;
            if (pattern[*pos] == '\0')
            {
              return 0;
            }
          }

          if (st->ccl_idx >= st->ccl_capacity)
          {
            return 0;
          }
          st->ccl_buf[st->ccl_idx++] = (unsigned char)pattern[*pos];
          (*pos)++;
        }

        if (pattern[*pos] != ']')
        {
          return 0;
        }

        if (st->ccl_idx >= st->ccl_capacity)
        {
          return 0;
        }
        st->ccl_buf[st->ccl_idx++] = 0;

        token = new_token(st);
        if (token == 0) return 0;
        token->type = negated ? INV_CHAR_CLASS : CHAR_CLASS;
        token->u.ccl = &st->ccl_buf[buf_begin];

        (*pos)++;
      } break;

      case '(':
      {
        (*pos)++;
        regex_t* inner = compile_sequence(st, pattern, pos, 1);
        if (inner == 0)
        {
          return 0;
        }
        if (pattern[*pos] != ')')
        {
          return 0;
        }
        token = new_token(st);
        if (token == 0) return 0;
        token->type = GROUP;
        token->u.group.first = inner;
        token->u.group.id = ++st->group_count;
        (*pos)++;
      } break;

      case ')':
      {
        token = new_token(st);
        if (token == 0) return 0;
        token->type = CHAR;
        token->u.ch = (unsigned char)c;
        (*pos)++;
      } break;

      default:
      {
        token = new_token(st);
        if (token == 0) return 0;
        token->type = CHAR;
        token->u.ch = (unsigned char)c;
        (*pos)++;
      } break;
    }

    if (!append_token(&head, &tail, token))
    {
      return 0;
    }
  }

  regex_t* sentinel = new_token(st);
  if (sentinel == 0)
  {
    return 0;
  }
  sentinel->type = UNUSED;
  sentinel->next = 0;

  if (head == 0)
  {
    head = sentinel;
  }
  else
  {
    tail->next = sentinel;
  }

  return head;
}

static const char* matchpattern(regex_t* pattern, const char* text, match_context* ctx)
{
  if ((pattern == 0) || (pattern->type == UNUSED))
  {
    return text;
  }

  re_capture snapshot[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot);

  regex_t* current = pattern;
  const char* cursor = text;

  while (current != 0 && current->type != UNUSED)
  {
    regex_t* next = current->next;

    if ((next != 0) && (next->type == QUESTIONMARK))
    {
      const char* result = matchquestion(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return 0;
    }
    else if ((next != 0) && (next->type == STAR))
    {
      const char* result = matchstar(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return 0;
    }
    else if ((next != 0) && (next->type == PLUS))
    {
      const char* result = matchplus(current, next->next, cursor, ctx);
      if (result != 0)
      {
        return result;
      }
      restore_captures(ctx, snapshot);
      return 0;
    }
    else if (current->type == END)
    {
      if (*cursor != '\0')
      {
        restore_captures(ctx, snapshot);
        return 0;
      }
      current = current->next;
    }
    else
    {
      const char* after = matchtoken(current, cursor, ctx);
      if (after == 0)
      {
        restore_captures(ctx, snapshot);
        return 0;
      }
      cursor = after;
      current = current->next;
    }
  }

  return cursor;
}

static const char* matchstar(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot_entry);

  const char* consume = matchtoken(token, text, ctx);
  while ((consume != 0) && (consume != text))
  {
    re_capture snapshot_after_token[MAX_CAPTURE_SLOTS];
    snapshot_captures(ctx, snapshot_after_token);

    const char* recursive = matchstar(token, rest, consume, ctx);
    if (recursive != 0)
    {
      return recursive;
    }

    restore_captures(ctx, snapshot_after_token);
    consume = matchtoken(token, consume, ctx);
  }

  restore_captures(ctx, snapshot_entry);
  return matchpattern(rest, text, ctx);
}

static const char* matchplus(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot_entry);

  const char* first = matchtoken(token, text, ctx);
  if ((first == 0) || (first == text))
  {
    restore_captures(ctx, snapshot_entry);
    return 0;
  }

  const char* result = matchstar(token, rest, first, ctx);
  if (result != 0)
  {
    return result;
  }

  restore_captures(ctx, snapshot_entry);
  return 0;
}

static const char* matchquestion(regex_t* token, regex_t* rest, const char* text, match_context* ctx)
{
  re_capture snapshot_entry[MAX_CAPTURE_SLOTS];
  snapshot_captures(ctx, snapshot_entry);

  const char* skipped = matchpattern(rest, text, ctx);
  if (skipped != 0)
  {
    return skipped;
  }

  restore_captures(ctx, snapshot_entry);

  const char* consumed = matchtoken(token, text, ctx);
  if ((consumed == 0) || (consumed == text))
  {
    restore_captures(ctx, snapshot_entry);
    return 0;
  }

  const char* with = matchpattern(rest, consumed, ctx);
  if (with != 0)
  {
    return with;
  }

  restore_captures(ctx, snapshot_entry);
  return 0;
}

static const char* matchtoken(regex_t* token, const char* text, match_context* ctx)
{
  switch (token->type)
  {
    case DOT:
      return (*text != '\0' && matchdot(*text)) ? text + 1 : 0;

    case CHAR:
      return (*text != '\0' && token->u.ch == (unsigned char)*text) ? text + 1 : 0;

    case CHAR_CLASS:
      return (*text != '\0' && matchcharclass(*text, (const char*)token->u.ccl)) ? text + 1 : 0;

    case INV_CHAR_CLASS:
      return (*text != '\0' && !matchcharclass(*text, (const char*)token->u.ccl)) ? text + 1 : 0;

    case DIGIT:
      return (*text != '\0' && matchdigit(*text)) ? text + 1 : 0;

    case NOT_DIGIT:
      return (*text != '\0' && !matchdigit(*text)) ? text + 1 : 0;

    case ALPHA:
      return (*text != '\0' && matchalphanum(*text)) ? text + 1 : 0;

    case NOT_ALPHA:
      return (*text != '\0' && !matchalphanum(*text)) ? text + 1 : 0;

    case WHITESPACE:
      return (*text != '\0' && matchwhitespace(*text)) ? text + 1 : 0;

    case NOT_WHITESPACE:
      return (*text != '\0' && !matchwhitespace(*text)) ? text + 1 : 0;

    case GROUP:
    {
      re_capture snapshot[MAX_CAPTURE_SLOTS];
      snapshot_captures(ctx, snapshot);

      const char* start = text;
      const char* end = matchpattern(token->u.group.first, text, ctx);
      if (end == 0)
      {
        restore_captures(ctx, snapshot);
        return 0;
      }

      if (token->u.group.id > 0 && ctx->captures != 0)
      {
        int idx = token->u.group.id - 1;
        if (idx < ctx->capture_capacity)
        {
          ctx->captures[idx].start = (int)(start - ctx->base);
          ctx->captures[idx].length = (int)(end - start);
        }
      }

      return end;
    }

    case BEGIN:
      return (text == ctx->base) ? text : 0;

    case END:
      return (*text == '\0') ? text : 0;

    default:
      break;
  }

  return 0;
}


static int matchdigit(char c)
{
  return isdigit((unsigned char)c);
}
static int matchalpha(char c)
{
  return isalpha((unsigned char)c);
}
static int matchwhitespace(char c)
{
  return isspace((unsigned char)c);
}
static int matchalphanum(char c)
{
  return ((c == '_') || matchalpha(c) || matchdigit(c));
}
static int matchrange(char c, const char* str)
{
  return (    (c != '-')
           && (str[0] != '\0')
           && (str[0] != '-')
           && (str[1] == '-')
           && (str[2] != '\0')
           && (    (c >= str[0])
                && (c <= str[2])));
}
static int matchdot(char c)
{
#if defined(RE_DOT_MATCHES_NEWLINE) && (RE_DOT_MATCHES_NEWLINE == 1)
  (void)c;
  return 1;
#else
  return c != '\n' && c != '\r';
#endif
}
static int ismetachar(char c)
{
  return ((c == 's') || (c == 'S') || (c == 'w') || (c == 'W') || (c == 'd') || (c == 'D'));
}

static int matchmetachar(char c, const char* str)
{
  switch (str[0])
  {
    case 'd': return  matchdigit(c);
    case 'D': return !matchdigit(c);
    case 'w': return  matchalphanum(c);
    case 'W': return !matchalphanum(c);
    case 's': return  matchwhitespace(c);
    case 'S': return !matchwhitespace(c);
    default:  return (c == str[0]);
  }
}

static int matchcharclass(char c, const char* str)
{
  do
  {
    if (matchrange(c, str))
    {
      return 1;
    }
    else if (str[0] == '\\')
    {
      str += 1;
      if (matchmetachar(c, str))
      {
        return 1;
      }
      else if ((c == str[0]) && !ismetachar(c))
      {
        return 1;
      }
    }
    else if (c == str[0])
    {
      if (c == '-')
      {
        return ((str[-1] == '\0') || (str[1] == '\0'));
      }
      else
      {
        return 1;
      }
    }
  }
  while (*str++ != '\0');

  return 0;
}

static void re_print_internal(regex_t* pattern, int depth)
{
  const char* types[] =
  {
    "UNUSED", "DOT", "BEGIN", "END", "QUESTIONMARK", "STAR", "PLUS", "CHAR",
    "CHAR_CLASS", "INV_CHAR_CLASS", "DIGIT", "NOT_DIGIT", "ALPHA", "NOT_ALPHA",
    "WHITESPACE", "NOT_WHITESPACE", "GROUP"
  };

  while (pattern != 0 && pattern->type != UNUSED)
  {
    for (int i = 0; i < depth; ++i)
    {
      putchar(' ');
    }
    printf("type: %s", types[pattern->type]);

    if ((pattern->type == CHAR_CLASS) || (pattern->type == INV_CHAR_CLASS))
    {
      printf(" [");
      const unsigned char* ccl = pattern->u.ccl;
      while (*ccl != '\0' && *ccl != ']')
      {
        printf("%c", *ccl);
        ++ccl;
      }
      printf("]");
    }
    else if (pattern->type == CHAR)
    {
      printf(" '%c'", pattern->u.ch);
    }
    else if (pattern->type == GROUP)
    {
      printf(" id=%d\n", pattern->u.group.id);
      re_print_internal(pattern->u.group.first, depth + 2);
      pattern = pattern->next;
      continue;
    }

    printf("\n");
    pattern = pattern->next;
  }
}
