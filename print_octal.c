#include "main.h"

/**
 * print_octal - print octal num
 * @oct: octal
 * Return: 0
 */

int print_octal(va_list oct)
{
	unsigned int i, num, arr[11], count = 0;
	unsigned int max = 1073741824;
	char x[1];

	num = va_arg(oct, unsigned int);

	arr[0] = num / max;
	for (i = 1; i < 11; i++)
	{
		max /= 8;
		arr[i] = (num / max) % 8;
	}
	for (i = 0; i < 11; i++)
	{
		x[0] = ('0' + arr[i]);
		write(1, x, 1);
		count++;
	}
	return (count);
}
