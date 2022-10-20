#include "main.h"

/**
 * _putchar - putchar with buffer
 * @c: the character to print
 * Return: 0-
 */

int _putchar(char c)
{
	char buff[1024];
	int i = 0;

	if (c < 0 || i >= 1024)
		write(1, &buff, i);
	if (c)
	{
		buff[i] = c;
		i++;
	}
	return (1);
}
