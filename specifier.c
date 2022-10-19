#include "main.h"

/**
 * specifier - check format specifier
 * @format: type
 * Return: nil
 */

int (*specifier(const char *format))(va_list)
{
	int i;

	func_y myArray[5] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_dec},
		{NULL, NULL}};

	for (i = 0; myArray[i].y; i++)
	{
		if (*(myArray[i].y) == *format)
			return (myArray[i].f);
	}
	return (NULL);
}
