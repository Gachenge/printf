#include "main.h"

/**
 * print_b - print binary
 * @b: variadic
 * Return: count
 */

int print_b(va_list b)
{
	int arr[10], num, i, count = 0;

	num = va_arg(b, int);

	if (!num)
		return (0);
	for (i = 0; num > 0; i++)
	{
		arr[i] = num % 2;
		num /= 2;
	}
	for (i = i -1; i >=0; i--)
	{
		write(1, &arr[i], 1);
		count++;
	}
	return (count);
}
