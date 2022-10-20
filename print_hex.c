#include "main.h"

/**
 * print_hex - hex convert
 * @n: the number
 * @x: flag
 * Return: 0
 */

int print_hex(unsigned int n, unsigned int x)
{
	unsigned int arr[8], i, max, sum = 0;
	char flag;
	int count = 0;
	char c[1];

	max = 268435456;

	if (x)
		flag = 'A' - ':';
	else
		flag = 'a' - ':';
	arr[0] = n / max;

	for (i = 1; i < 8; i++)
	{
		max /= 16;
		arr[i] = (n / max) % 16;
	}
	for (i = 0; i < 8; i++)
	{
		sum += arr[i];
		if (sum || i == 7)
		{
			if (arr[i] < 10)
			{
				c[0] = ('0' + arr[i]);
				write(1, c, 1);
			}
			else
			{
				c[0] = ('0' + flag + arr[i]);
				write(1, c, 1);
			}
			count++;
		}
	}
	return (count);
}

/**
 * small - small letter
 * @x: int
 * Return: 0
 */

int small(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * large - capitals
 * @X: inte
 * Return: 0
 */

int large(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}
