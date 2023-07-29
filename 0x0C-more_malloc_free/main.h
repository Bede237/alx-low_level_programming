#ifndef MALLOC_H
#define MALLOC_H
#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int concat_s1(char *p, char *s1);
char *concat_s2(char *p, char *s2, unsigned int n, int i);

#endif
