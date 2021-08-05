#include "holberton.h"
/**
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i;
	unsigned int *ptr = &i;
	int count = 0;

	va_start(list, format);
	for (i = 0; ((format != NULL) && (format[i] != '\0')); i++)
	{
		if (format[i] == '%')
			count = get_op_func(count, format, ptr, list);
		else
		{
			_putchar(format[i]);
			count += 1;
		}
	}
	va_end(list);
	return (count);
}
