#include "holberton.h"
/**
 * getop_func - function that searches for a
 * match and then executes the proper function
 * @count: Count for printf
 * @format: The string being tested
 * @ptr: ptr to string location after %
 * @list: name of the va_list
 * Return: count
 */
int getop_func(int count, const char *format, unsigned int *ptr, va_list list)
{
	st_search type[] = {
		{'i', print_int},
		{'d', print_int},
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	int index;
	int check = 0;

	for (index = 0; type[index].character != '\0'; index++)
	{
		if (type[index].character == format[*(ptr) + 1])
		{
			count = type[index].f(count, list);
			check = 1;
		}
	}
	if (check != 1)
	{
		count += 2;
		_putchar('%');
		_putchar(format[*(ptr) + 1]);
	}
	return (count);
}
