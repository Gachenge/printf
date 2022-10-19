#include "main.h"

/**
 * _printf - print the everything
 * @format: how long 
 * Return: always 0
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list ptr;
	int (*f)(va_list);

	va_start(ptr, format);

	if (!format)
		return (-1);
	while (format[i])
	{
		for (; format[i] &&format[i] != '%'; i++)
		{
			write(1, &format[i], 1);
			count++;
		}
		if(!format[i])
			return (count);

		f = specifier(&format[i + 1]);

		if (f)
		{
			count += f(ptr);
			i +=2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		write(1, &format[i], 1);
		count ++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ptr);
	return (count);
}
