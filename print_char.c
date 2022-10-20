#include "main.h"

/**
 * print_char - prints character
 * @ch: variadic
 * Return: 0
 */

int print_char(va_list ch)
{
	char s = (char)va_arg(ch, int);

		write(1, &s, 1);

	return (1);
}
