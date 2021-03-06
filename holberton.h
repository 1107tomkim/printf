#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct search - struct for searching
 * the specific characters
 * @character: The character that needs to
 * be matched after the % sign
 * @f: The function to be called for each specific
 * character that it matches with.
 */
typedef struct search
{
	char character;
	int (*f)(int count, va_list list);
} st_search;

int _putchar(char c);
int print_char(int count, va_list c);
int print_string(int count, va_list s);
int print_int(int count, va_list i);
int print_uint(int count, va_list u);
int print_percent(int count, va_list p);
int getop_func(int count, const char *format, unsigned int *ptr, va_list list);

int _printf(const char *format, ...);
#endif
