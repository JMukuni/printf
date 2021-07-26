#include "holberton.h"

/**
 * _strlen - get lenght of a string
 * @str: String
 *
 * Return: lenght of str
 */
int _strlen(char *str)
{
	register int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _abs - get absolute value of a number
 * @n: number
 *
 * Return: absolute value of n
 */
int _abs(int n)
{
	return (n < 0 ? n * -1 : n);
}

/**
 * _numlen - get lenght of a number
 * @num: number
 *
 * Return: lenght of num
 */
int _numlen(int num)
{
	register int len;

	len = 0;
	while (num / 10 != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}
