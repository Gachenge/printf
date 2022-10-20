#include "main.h"

/**
 * print_u - print binary
 * @u: variadic
 * Return: count
 */

int print_u(va_list u)
{
	unsigned int num, max, sum = 0, arr[10], i;
	int count = 0;
	char x[1];

	num = va_arg(u, unsigned int);

	max = 1000000000;

	arr[0] = num / max;

	for (i = 1; i < 10; i++)
	{
		max /= 10;
		arr[i] = (num / max) % 10;
	}
	for (i = 0; i < 10; i++)
	{
		sum += arr[i];
		if (sum || i == 9)
		{
			x[0] = ('0' + arr[i]);
			write(1, x, 1);
			count++;
		}
	}
	return (count);
}
