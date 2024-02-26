/*This string file handles string functions using arrays*/

#include "str.h"
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
    size_t index = 0; /* Note to self: Declarations should happen 
    before any action. Example: assert*/
    
    assert(copiedArray != NULL);
    assert(strArray != NULL);

    while ((copiedArray[index] = strArray[index]) != '\0') {
        index++;
    }
    return copiedArray;
}

char *Str_concat(char tobeConcat[], const char strArray[]) {
    size_t lentobeConcat;
    size_t index = 0;

    assert(tobeConcat != NULL);
    assert(strArray != NULL);

    lentobeConcat = Str_getLength(tobeConcat);

    while (strArray[index] != '\0') {
        tobeConcat[lentobeConcat + index] = strArray[index];
        index++;
    }
    tobeConcat[lentobeConcat + index] = strArray[index];
    return tobeConcat;
}

int Str_compare(const char strToCompare[], const char strArray[]) {
    size_t index = 0;

    assert(strToCompare != NULL);
    assert(strArray != NULL);

    while(strToCompare[index] != '\0' || strArray[index] != '\0') {
        if (strToCompare[index] > strArray[index]) {
            return 1;
        }
        else if (strToCompare[index] < strArray[index]) {
            return -1;
        }
        else index++; 
    }
    return 0;
}

char *Str_search(const char haystack[], const char needle[]) {
    size_t indexHay = 0;
    size_t trackHay = 0;
    size_t indexNeedle = 0;

    assert(haystack != NULL);
    assert(needle != NULL);

    while (haystack[indexHay] != '\0' && needle[indexNeedle] != '\0') {
        if (haystack[indexHay] == needle[indexNeedle]) {
            if (indexNeedle == 0) {
                trackHay = indexHay;  
            }
            indexHay++;
            indexNeedle++;
        } else {
            indexHay = trackHay + 1; 
            trackHay = indexHay;     
            indexNeedle = 0;      
        }
    }

    if (needle[indexNeedle] == '\0') {
        return (char *)&haystack[trackHay];  
    } else {
        return NULL;  
    }
}
