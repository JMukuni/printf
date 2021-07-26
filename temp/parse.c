#include "holberton.h"

/**
 * parse_format - parse input format specifier
 * @c: specifier character
 * 
 * Return lenght of arg
 */
int* parse_format(char c, va_list list)
{
	int arr[2] = {0, 0} /**{lenght, iterator}*/

	if (c == '%')
	{
		arr[0] = write_char('%');
	}
	if (c == 'c')
	{
		print_char(list);
		arr[0]++;
		arr[1] += 1;
	}
	if (c == 's')
	{
			arr[0] += print_string(list);
		arr[1] += 1;
	}
	if (c == 'd')
	{
		arr[0] += print_int(list);
		arr[1] += 1;
	}
	return (arr);
}
