#ifndef STRA_INCLUDED
#define STRA_INCLUDED

#include <stddef.h> 

/*Handles the get length function. Takes strArray array of characters
and returns the length of the string */
size_t Str_getLength(const char strArray[]);

/*Handles the string copy function. Takes two arguments, copies 
strArray to copiedArray and returns a pointer to copiedArray */
char *Str_copy(char copiedArray[], const char strArray[]);

/*Handles string concatenate function. Takes two arguments, concatenates
the content of strArray to the end of tobeConcat and returns the pointer 
to tobeConcat */
char *Str_concat(char tobeConcat[], const char strArray[]);

/*Handles the string compare function. Takes two arguments and compares 
strArray and strToCompare. It returns -1 if strToCompare is less than 
strArray, 1 if strArray is is less than strToCompare and 0 when they 
are equal. */
int Str_compare(const char strToCompare[], const char strArray[]);

/*Handles string search function. Takes two arguments, returns the 
pointer to the first occurence of needle in haystack but null when needle
is not found in haystack*/
char *Str_search(const char haystack[], const char needle[]);

#endif 
