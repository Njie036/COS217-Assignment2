/*The stra.c file*/

#include "str.h"
#include <stddef.h>
#include <assert.h>

size_t Str_getLength(const char strArray[]) {
    size_t uLength =  0;
    assert(strArray != NULL);

    while (strArray[uLength] != '\0') {
        uLength++;
    }
    return uLength;
}

char *Str_copy(char copiedArray[], const char strArray[]) {
    assert(copiedArray != NULL && strArray != NULL);
    size_t index = 0;
    while ((copiedArray[index] = strArray[index]) != '\0') {
        index++;
    }
    return copiedArray;
}

char *Str_concat(char tobeConcat[], const char strArray[]) {
    asssert(tobeConcat != NULL && strArray != NULL);
    size_t lentobeConcat = Str_getLength(tobeConcat);
    size_t index = 0;
    while (strArray[index] != '\0') {
        tobeConcat[lentobeConcat + index] = strArray[index];
        index++;
    }
    return (int)(tobeConcat[index] - strArray[index]);

}

int Str_compare(const char charToCompare[], const char strArray[]) {
    return 0;
}


