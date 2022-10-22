#include "main.h"

/**
 * print_p - print address
 * @P: the variadic
 * Return: 0
 */

int print_p(va_list P)
{
	unsigned int sum = 0, i, arr[16];
	char c[1];
	unsigned long max = 1.15292150461e+18, num;
	int count = 0;

	num = va_arg(P, unsigned long);

	if (num == 0)
	{
		for (i = 0; arr[i]; i++)
		{
			write(1, "(nil)", 5);
			count++;
		}
		return (count);
	}
	write(1, "0", 1);
	write(1, "x", 1);
	count += 2;
	arr[0] = num / max;

	for (i = 1; i < 16; i++)
	{
		max /= 16;
		arr[i] = (num / max) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		sum += arr[i];
		if (sum || i == 13)
		{
			if (arr[i] > 9)
			{
				c[0] = ('0' + 39 + arr[i]);
				write(1, c, 1);
				count++;
			}
			else
			{
				c[0] = ('0' + arr[i]);
				write(1, c, 1);
				count++;
			}
		}
	}
	return (count);
}
