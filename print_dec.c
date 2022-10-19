#include "main.h"

/**
 * print_dec - print decimal
 * @ptr: variadic
 * Return: count
 */

int print_dec(va_list ptr)
{
	int i, num, temp, count = 0, arr[10];
	char c[1];

	num = va_arg(ptr, int);

	while (num)
	{
		arr[i] = num % 10;
		num = num/10;
		if (num == 0)
			break;
		else
			i++;
	}
	while (i >= 0)
	{
		c[0] = ('0' + arr[i]);
		temp = write(1, c, 1);
		count += temp;
		i--;
	}
	return (count);
}
