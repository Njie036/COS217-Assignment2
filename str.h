#ifndef STR_H
#define STR_H

#include <stddef.h> 

/*Handles the get length function*/
size_t Str_getLength(const char strArray[]);

/*Handles the string copy function*/
char *Str_copy(char copiedArray[], const char strArray[]);

/*Handles string concatenate function*/
char *Str_concat(char tobeConcat[], const char strArray[]);

/*Handles the string compare function*/
int Str_compare(const char strToCompare[], const char strArray[]);

/*Handles string search function*/
/*const char *Str_search(const char *chrToSearch, const char *otherChar);*/

#endif 
