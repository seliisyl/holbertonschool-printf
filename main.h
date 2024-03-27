#ifndef __MAIN_H__
#define __MAIN_H__
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/**
 * struct printf - struct
 *
 * @op: specifier
 * @f: function associated
 */

typedef struct printf
{
	char *op;
	int (*f)(va_list args);

} _print_func;

	int _putchar(char c);
	int print_c(va_list args);
	int  print_s(va_list args);
	int print_i_d(va_list args);
	int print_purcent(va_list args);
	int _printf(const char *format, ...);
	int _print_function(va_list args, char specifier);
	int print_decimal(va_list args);
#endif
