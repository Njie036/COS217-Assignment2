/*This handles string functions using pointers*/

#include "str.h"
#include <assert.h>

size_t Str_getLength(const char *pstr) {
    const char *pcEnd;
    assert(pstr != NULL);
    pcEnd = pstr;
    while (*pcEnd != '\0') {
        pcEnd++;
    }
    return (size_t)(pcEnd - pstr);
}

char *Str_copy(char *destOfCopy, const char *pstr) {
    char *refDeststr;
    
    assert(destOfCopy != NULL);
    assert(pstr != NULL);
    
    refDeststr = destOfCopy;

    while ((*destOfCopy = *pstr) != '\0') {
        destOfCopy++;
        pstr++;
    }
    return refDeststr;
}

char *Str_concat(char *destOfConcat, const char *pstr) {
    char *refDeststr;
    assert(destOfConcat != NULL);
    assert(pstr != NULL);

    refDeststr = destOfConcat;
    destOfConcat += Str_getLength(destOfConcat);

    destOfConcat = Str_copy(destOfConcat, pstr);
    return refDeststr;
}

int Str_compare(const char *toCompare, const char *pstr) {
    const char *ptrCompare;
    assert(toCompare != NULL);
    assert(pstr != NULL);
    
    ptrCompare = pstr;
    while(*toCompare != '\0' || *pstr != '\0') {
        if (*pstr > *ptrCompare) {
            return 1;
        }
        else if (*pstr < *ptrCompare) {
            return -1;
        }
        else {
            pstr++;
            ptrCompare++;
        }
    }
    return 0;
}

const char *Str_search(const char *haystack, const char *needle) {
    return NULL;
}