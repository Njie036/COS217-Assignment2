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

size_t Str_copy(char copiedArray[], const char strArray[]) {
    assert(copiedArray != NULL && strArray != NULL);
    size_t index = 0;
    while ((copiedArray[index] = strArray[index]) != '\0') {
        index++;
    }
    return index;
}

char Str_concat(char tobeConcat[], const char strArray[]) {
    return '0';

}

int Str_compare(const char charToCompare[], const char strArray[]) {
    return 0;
}


