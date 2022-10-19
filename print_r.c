#include "main.h"

/**
 * print_r - print reverse
 * @ptr: the variadic
 * Return: 0
 */

int print_r(va_list ptr)
{
	char *str;
	int i, j, count = 0;

	str = va_arg(ptr, char *);
	if (!str)
		str = ")llun(";
	for (i = 0; str[i]; i++)
		;
	for (j = i; j >= 0; j--)
	{
		write(1, &str[i], 1);
		count++;
	}
	return (count);
}
