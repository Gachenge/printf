#include "main.h"

/**
 * print_hX - convert to hex
 * @c: the character
 * Return: 0
 */

static int print_hX(char c)
{
	int i;
	char x[2];

	x[0] = c / 16;
	x[1] = c %16;

	for (i = 0; i < 2; i++)
	{
		if (x[i] > 9)
			_putchar('0' + 7 + x[i]);
		else
			_putchar('0' + x[i]);
	}
	return (i);
}

/**
 * print_S - print non printable characters
 * @str: variadic string
 * Return: 0
 */

int print_S(va_list S)
{
	unsigned int i, count = 0;
	char *x;

	x = va_arg(S, char *);
	if (!x)
		x = "(null)";
	for(i = 0; x[i]; i++)
	{
		if (x[i] < 32 || x[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			count += print_hX(x[i]);
		}
		else
		{
			_putchar(x[i]);
			count++;
		}
	}
	return (count);
}
