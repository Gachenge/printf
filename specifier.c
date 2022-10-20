#include "main.h"

/**
 * specifier - check format specifier
 * @format: type
 * Return: nil
 */

int (*specifier(const char *format))(va_list)
{
	int i;

	func_y myArray[10] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_r},
		{"o", print_octal},
		{"%", print_pc},
		{"b", print_b},
		{"u", print_u},
		{NULL, NULL}
	};

	for (i = 0; myArray[i].y; i++)
	{
		if (*(myArray[i].y) == *format)
			break;
	}
	return (myArray[i].f);
}
