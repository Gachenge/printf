#include "main.h"

/**
 * print_b - print binary
 * @b: variadic
 * Return: count
 */

int print_b(va_list b)
{
	unsigned int num, max, sum = 0, arr[32], i;
	int count = 0;
	char x[1];

	num = va_arg(b, unsigned int);

	max = 2147483648;

	arr[0] = num / max;

	for (i = 1; i < 32; i++)
	{
		max /= 2;
		arr[i] = (num / max) % 2;
	}
	for (i = 0; i < 32; i++)
	{
		sum += arr[i];
		if (sum || i == 31)
		{
			x[1] = ('0' + arr[i]);
			write(1, x, 1);
			count++;
		}
	}
	return (count);
}
