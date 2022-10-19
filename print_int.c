#include "main.h"

/**
 * print_int - print integers
 * @ptr: variadic
 * Return: count
 */

int print_int(va_list ptr)
{
	int i, num, temp, count, arr[10];
	char x[1];

	num = va_arg(ptr, int);

	while (num)
	{
		arr[i] = num % 10;
		num = num / 10;
		if (num == 0)
			break;
		else
			i++;
	}
	while (i >= 0)
	{
		x[0] = ('0' + arr[i]);
		temp = write(1, x, 1);
		count += temp;
		i--;
	}
	return (count);
}
