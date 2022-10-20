#include "main.h"

/**
 * print_dec - print integers
 * @ptr: variadic
 * Return: 0
 */

int print_dec(va_list ptr)
{
	int arr[10];
	int i, num, count, large, sum;
	char x[1];

	num = va_arg(ptr, int);
	count = 0;
	large = 1000000000;
	arr[0] = num / large;

	for (i = 1; i < 10; i++)
	{
		large = large / 10;
		arr[i] = (num / large) % 10;
	}
	if (num < 0)
	{
		write(1, "-", 1);
		count++;
		for (i = 0; i < 10; i++)
			arr[i] *= -1;
	}
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += arr[i];
		if (sum != 0 || i == 9)
		{
			x[0] = ('0' + arr[i]);
			write(1, x, 1);
			count++;
		}
	}
	return (count);
}
