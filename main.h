#ifndef MAIN_iH
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct printf - a function for conversion specifiers
 * and their corresponding functions.
 * @t: The specifier
 * @f: the corresponding function
 */

typedef struct printf
{
	char t;
	int (*f)(va_list list);
} print;

int printchar(va_list);
int printstr(va_list);
int printint(va_list);
int printnum(va_list);
int printbinary(va_list);
int binary(unsigned int, int*);
int octal(unsigned int n, int *ptr);
int printoctal(va_list);
int printunsigned(va_list);
int hexa(unsigned int n, int *ptr);
int printhexa(va_list);
int HEXA(unsigned int n, int *ptr);
int printHEXA(va_list);
int print_rev(va_list r);
#endif
