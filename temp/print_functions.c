#include "holberton.h"

/**
 * write_char - write a char to stdout
 * @c: character to print
 *
 * Return: 1
 */
int write_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - print a char
 * @c: va_list char
 *
 * Return: 1
 */
int print_char(va_list c)
{
	return (write_char(va_arg(c, char)));
}

/**
 * print_string - prints a string
 * @s: string
 *
 * Return: lenght of string
 */
int print_string(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i = 0;

	while (s[i] != '\0')
	{
		write_char(s[i]);
		i++;
	}
	return (i - 1);
}

/**
 * print_int - prints an integer
 * @n: integer to print
 *
 * Return: length of integer (n)
 */
int print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int i = 0;

	if (n < 0)
	{
		print_char('-');
		n = _abs(n);
	}
	if (n < 10 && n >= 0)
	{
		print_char(n + '0');
		return (n);
	}
	i = n % 10;
	print_int(n / 10);
	print_char(i + '0');
	return (_numlen(n));
}

/**
 * print_percent - print percent sign
 *
 * Return: 1
 */
int print_percent(void)
{
	print_char('%');
	return (1);
}
