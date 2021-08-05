#include "holberton.h"
/**
 *
 *
 *
 *
 */
int get_op_func(int count, const char *format, unsigned int *ptr, va_list list)
{
	st_search type[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}
	};

	int index;

	for (index = 0; type[index].character != '\0'; index++)
	{
		if (type[index].character == format[*(ptr + 1)])
		{
			count = type[index].function(count, list);
			*(ptr) += 1;
		}
	}
	return (count);
}
