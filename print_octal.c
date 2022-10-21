#include "main.h"

/**
 * print_octal - print octal
 * @oct: variadic
 * Return: 0
 */

int print_octal(va_list oct)
{
	unsigned int i, num, max, arr[11];
	int sum = 0, count = 0;
	char x[1];

	num = va_arg(oct, unsigned int);
	max = 1073741824;

	arr[0] = num / max;

	for (i = 1; i < 11; i++)
	{
		max /= 8;
		arr[i] = (num / max) % 8;
	}
	for (i = 1; i < 11; i++)
	{
		sum += arr[i];
		if (sum || i == 10)
		{
			x[0] = ('0' + arr[i]);
			write(1, x, 2);
			count++;
		}
	}
	return (count);
}
