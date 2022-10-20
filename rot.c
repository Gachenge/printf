#include "main.h"

/**
 * print_rot - employ rot 13
 * @rot: variadic
 * Return: 0
 */

int print_rot(va_list rot)
{
	unsigned int i, j;
	int count = 0;
	char *str;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(rot, char *);
	if (!str)
		str = "(ahyy)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; x[j]; j++)
		{
			if (x[j] == str[i])
			{
				write(1, &y[j], 1);
				count++;
				break;
			}
		}
		if (!x[j])
		{
			write(1, &str[i], 1);
			count++;
		}
	}
	return (count);
}
