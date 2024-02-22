#ifndef STRING_H
#define STRING_H

#include <stddef.h> // For size_t

// Function declarations
size_t Str_getLength(const char **pstr);
void Str_copy(char *tobeCopied, const char *pstr);
char Str_concat(char *tobeConcat, const char *pstr);
int Str_compare(const char *charToCompare, const char *pstr);
const char *Str_search(const char *chrToSearch, const char *otherChar);

#endif 
