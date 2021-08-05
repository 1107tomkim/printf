#include "holberton.h"
/**
 * print_char - Function that prints characters
 * @c: char that is being printed
 * Return: 0, if everything executes properly
 */
int print_char(int count, va_list c)
{
	_putchar(va_arg(c, int));
	count += 1;
	return (count);
}

/**
 * print_string - Function that prints string
 * @s: String being printed
 * Return: length of string
 */
int print_string(int count, va_list s)
{
	int i = 0;
	char *string = va_arg(s, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	for (i = 0; string[i] != '\0' && string != NULL; i++)
	{
		_putchar(string[i]);
		count += 1;
	}
	return (count);
}

/**
 * print_int - Function that prints int
 * @i: int being printed
 * Return: int
 */
/** int print_int(va_list i)
{
	int n;

	n = va_arg(i, int);

	if (n < 0)
	{
		_putchar('-');

}

*/
/**
 * print_uint - Function that prints
 * unsigned int
 * @u: unsigned int
 * Return: Unsigned int
 */
/** int print_uint(va_list u)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	j = 1;
	k = 0;
	i = va_arg(i, unsigned int);

}
*/
/**
 * print_percent - function that prints
 * a percent sign
 * @p: percent
 * Return: void
 */
int print_percent(int count, va_list p)
{
	(void) p;
	_putchar('%');
	count += 1;

	return (count);
}
