#include "neo-c.h"

regex_struct*% regex(char* str, bool ignore_case, bool multiline, bool global, bool extended, bool dotall, bool anchored, bool dollar_endonly, bool ungreedy)
{
    auto result = new regex_struct;

    const char* err;
    int erro_ofs;

    int options = PCRE_UTF8 | (ignore_case ? PCRE_CASELESS:0) | (multiline ? PCRE_MULTILINE : 0) | (extended ? PCRE_EXTENDED :0) | (dotall ? PCRE_DOTALL :0) | (dollar_endonly ? PCRE_DOLLAR_ENDONLY:0) | (ungreedy ? PCRE_UNGREEDY:0);

    result.str = string(str);

    result.ignore_case = ignore_case;
    result.multiline = multiline;
    result.global = global;
    result.extended = extended;
    result.dotall = dotall;
    result.anchored = anchored;
    result.dollar_endonly = dollar_endonly;
    result.ungreedy;
    result.options = options;

    result.re = pcre_compile(str, options, &err, &erro_ofs, NULL);

    if(result.re == NULL) {
fprintf(stderr, "regex error (%s)\n", str);
        return NULL;
    }

    return result;
}

void regex_struct*::finalize(regex_struct* reg)
{
    if(reg && reg.str) {
        delete reg.str;
    }
    if(reg && reg.re) {
        free(reg.re);
    }
}

regex_struct*% regex_struct*::clone(regex_struct* reg)
{
    regex_struct*% result = new regex_struct;
    
    result.str = clone reg.str;

    result.ignore_case = reg.ignore_case;
    result.multiline = reg.multiline;
    result.global = reg.global;
    result.extended = reg.extended;
    result.dotall = reg.dotall;
    result.anchored = reg.anchored;
    result.dollar_endonly = reg.dollar_endonly;
    result.ungreedy = reg.ungreedy;

    result.options = reg.options;

    const char* err;
    int erro_ofs;

    result.re = pcre_compile(result.str, result.options, &err, &erro_ofs, NULL);

    if(result.re == NULL) {
        return NULL;
    }

    return result;
}

void nregex::finalize(regex_struct* reg)
{
    regex_struct_finalize(reg);
}

nregex nregex::clone(regex_struct* reg)
{
    return regex_struct_clone(reg);
}


