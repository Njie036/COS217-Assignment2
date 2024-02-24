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
    assert(toCompare != NULL);
    assert(pstr != NULL);
    
    while(*toCompare != '\0' || *pstr != '\0') {
        if (*pstr > *toCompare) {
            return -1;
        }
        else if (*pstr < *toCompare) {
            return 1;
        }
        else {
            pstr++;
            toCompare++;
        }
    }
    return 0;
}

char *Str_search(const char *haystack, const char *needle) {
    const char *refHaystack;
    const char *refNeedle;
    const char *trackHaystack;

    assert(haystack != NULL);
    assert(needle != NULL);

    refHaystack = haystack;
    refNeedle = needle;

    while (*haystack != '\0' || *needle != '\0') {
        if (*refHaystack == *refNeedle) {
            trackHaystack = refHaystack;
            refHaystack++;
            refNeedle++;
        return &trackHaystack;
        }
        else {
            refHaystack++;
        }
    }
    return NULL;
}