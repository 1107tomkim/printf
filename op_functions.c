#include "holberton.h"
/**
 * print_char - Function that prints characters
 * @c: char that is being printed
 * Return: 0, if everything executes properly
 */
int print_char(va_list c)
{
	_putchar(va_arg(c, int))
	return (0);
}

/**
 * print_string - Function that prints string
 * @s: String being printed
 * Return: length of string
 */
int print_string(va_list s)
{
	int len;
	char *string;
	string = va_arg(s, char *);

	if (string == '\0')
	{
		string = "(null)";
	}
	for (len = 0; string[len] != '\0'; len++)
	{
		_putchar(string[len]);
	}
	return (len);
}

/**
 * print_int - Function that prints int
 * @i: int being printed
 * Return: int
 */
int print_int(va_list i)
{
	int n;
}


/**
 * print_uint - Function that prints
 * unsigned int
 * @u: unsigned int
 * Return: Unsigned int
 */
int print_uint(va_list u)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	j = 1;
	k = 0;
	i = va_arg(i, unsigned int);

}

/**
 * print_percent - function that prints
 * a percent sign
 * @p: percent
 * Return: void
 */
void print_percent(va_list p)
{
	(void) p;
	_putchar('%');
}
