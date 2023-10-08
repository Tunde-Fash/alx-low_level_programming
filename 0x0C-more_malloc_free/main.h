#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>

void *malloc_checked(unsigned int b);
int _putchar(char c);

char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int _isdigit(char *str);
int _strlen(char *str);
void multiply(char *num1, char *num2);
void print_result(char *result);

#endif /* MAIN_H */

