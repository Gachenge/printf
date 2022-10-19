#include "main.h"

/**
 * print_str - print string
 * @args: variadic
 * Return: count
 */

int print_str(va_list ptr)
{
	int count;
	char *str;

	str = va_arg(ptr, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
		write(1, &str[count], 1);
	return (count);
}
