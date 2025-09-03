ccpp — a tiny toy C preprocessor

Features (initial):
- Supports simple object-like `#define NAME VALUE` macros (no args)
- Replaces identifiers in code, skipping string literals and comments
- Reads from a file path or stdin; writes to stdout

Usage:
- Build: `make -C ccpp`
- Test: `make -C ccpp test`
- Run: `./ccpp/ccpp [input.c] > output.c`

Limitations (by design for now):
- No `#include`, conditionals, or function-like macros
- No macro redefinition/undef tracking beyond last definition wins
- Block comments are skipped at a basic level; nested comments not supported

