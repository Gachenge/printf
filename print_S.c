#include "main.h"

/**
 * print_S - print non printable characters
 * @str: variadic string
 * Return: 0
 */

int print_S(va_list str)
{
	unsigned int i, count = 0;
	char *x;

	x = va_arg(str, char*);
	if (!x)
		x = "(null)";
	for(i = 0; x[i]; i++)
	{
		if (x[i] < 32 || x[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += print_hex(x[i]);
		}
		else
		{
			_putchar(x[i]);
			count++;
		}
	}
	return (count);
}
