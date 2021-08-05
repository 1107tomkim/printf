#include "holberton.h"
/**
 * _printf -  function that works just like a
 * normal printf function
 * @format: the string being tested
 * Return: Count
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i;
	unsigned int *ptr = &i;
	int count = 0;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (i = 0; ((format != NULL) && (format[i] != '\0')); i++)
	{
		if (format[i] == '%')
		{
			count = getop_func(count, format, ptr, list);
			i++;
		}
		else
		{
			_putchar(format[i]);
			count += 1;
		}
	}
	va_end(list);
	return (count);
}
