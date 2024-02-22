/*The stra.c file*/

#include "str.h"
#include <assert.h>

size_t Str_getLength(const char *pstr) {
    assert(pstr != NULL);

    size_t length = 0;
    while (pstr[length] != '\0') {
        length++;
    }
    return length;
}

void Str_copy(char *tobeCopied, const char *pstr) {

}

char *Str_concat(char *tobeConcat, const char *pstr) {
    assert(tobeConcat != NULL && pstr != NULL);

    while(*tobeConcat != '\0') {
        tobeConcat++;
    }
    while (*pstr != '\0') {
        *tobeConcat == *pstr;
        tobeConcat++;
        pstr++;
    }
    *tobeConcat = '\0';
    return tobeConcat;
}

int Str_compare(const char *charToCompare, const char *pstr) {
    return 0;
}