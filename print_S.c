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
	char v[1];

	x[0] = c / 16;
	x[1] = c % 16;

	for (i = 0; i < 2; i++)
	{
		if (x[i] > 9)
		{
			v[0] = ('0' + 7 + x[i]);
			write(1, v, 1);
		}
		else
		{
			v[0] = ('0' + x[i]);
			write(1, v, 1);
		}
	}
	return (i);
}

/**
 * print_S - print non printable characters
 * @S: variadic string
 * Return: 0
 */

int print_S(va_list S)
{
	unsigned int i, count = 0;
	char *x;

	x = va_arg(S, char *);
	if (!x)
		x = "(null)";
	for (i = 0; x[i]; i++)
	{
		if (x[i] < 32 || x[i] >= 127)
		{
			write(1, "\\", 1);
			write(1, "x", 1);
			count += 2;
			count += print_hX(x[i]);
		}
		else
		{
			write(1, &x[i], 1);
			count++;
		}
	}
	return (count);
}
