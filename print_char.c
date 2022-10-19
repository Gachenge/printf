#include "main.h"

/**
 * print_char - prints character
 * @ptr: variadic
 * Return: 0
 */

int print_char(va_list ptr)
{
	char s = (char)va_arg(ptr, int);

	if (s)
	{
		write(1, &s, 1);
	}
	return (1);
}
