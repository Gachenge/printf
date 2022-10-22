#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*specifier(const char *))(va_list);

/**
 * struct func - check format
 * @y: the one we check
 * @f:  the functions
 */

typedef struct func
{
	char *y;
	int (*f)(va_list);
} func_y;

int print_char(va_list);
int print_str(va_list);
int print_int(va_list);
int print_dec(va_list);
int print_octal(va_list);
int print_r(va_list);
int print_pc(va_list);
int print_b(va_list);
int print_u(va_list);
int print_rot(va_list);
int large(va_list);
int small(va_list);
int _putchar(char c);
int print_S(va_list);
int print_p(va_list);

#endif /* MAIN_H */
