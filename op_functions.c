#include "holberton.h"
/**
 * print_char - Function that prints characters
 * @count: printf count
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
 * @count: printf count
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
 * @count: printf count
 * @i: int being printed
 * Return: int
 */
int print_int(int count, va_list i)
{
	int num;

	num = va_arg(i, int);

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		count++;
	}

	return (count);
}
/**
 * print_percent - function that prints
 * a percent sign
 * @count: printf count
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

/**
 * print_dec - prints decimal
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_dec(va_list arg)
{
	int n = va_arg(arg, int);
	int num;
	int last = n % 10;
	int d;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			d = num / exp;
			_putchar(d + '0');
			num = num - (d * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * print_int - prints integer
 * @arg: argument to print
 * Return: number of characters printed
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int num;
	int last = n % 10;
	int d;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			d = num / exp;
			_putchar(d + '0');
			num = num - (d * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
