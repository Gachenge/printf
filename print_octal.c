#include "main.h"

/**
 * print_octal - print octal
 * @ptr: variadic
 * Return: 0
 */

int print_octal(va_list ptr)
{
	unsigned int i, num, max, arr[11];
	int sum = 0, count = 0;

	num = va_arg(ptr, unsigned int);
	max = 1073741824;

	arr[0] = num / max;

	i = 1;
	while (i < 11)
	{
		max /= 8;
		arr[i] = (num / max) % 8;
		i++;
	}
	for (i = 0; i < 11; i++)
	{
		sum += arr[i];
		if (sum || i == 10)
		{
			write(1, &arr[i], 1);
			count++;
		}
	}
	return (count);
}