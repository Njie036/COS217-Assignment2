/*This handles string functions using pointers*/

#include "str.h"
#include <assert.h>

size_t Str_getLength(const char *pstr) {
    const char *pcEnd;
    assert(pstr != NULL);
    pcEnd = pstr;
    while (pcEnd != '\0') {
        pcEnd++;
    }
    return (size_t)(pcEnd - pstr);
}

char Str_copy(char *tobeCopied, const char *pstr) {
    assert(tobeCopied != NULL && pstr != NULL);
    const char *

}

char *Str_concat(char *tobeConcat, const char *pstr) {
    assert(tobeConcat != NULL && pstr != NULL);

}

int Str_compare(const char *charToCompare, const char *pstr) {
    assert(charToCompare != NULL && pstr != NULL);

}