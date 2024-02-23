#ifndef STRING_H
#define STRING_H

#include <stddef.h> 

/*Handles the get length function*/
size_t Str_getLength(const char *pstr);

/*Handles the string copy function*/
char Str_copy(char *tobeCopied, const char *pstr);

/*Handles string concatenate function*/
char Str_concat(char *tobeConcat, const char *pstr);

/*Handles the string compare function*/
int Str_compare(const char *charToCompare, const char *pstr);

/*Handles string search function*/
/*const char *Str_search(const char *chrToSearch, const char *otherChar);*/

#endif 
