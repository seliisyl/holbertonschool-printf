#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - fonction pour sélectionner la fonction correcte
 * @format: liste des arguments
 * Return: nombre de caractères imprimés
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int printed_chars = 0;

	va_start(args, format);

	while (format[i] != '\0')

	{
		if (format[i] == '%')
		{
			_print_func print[] = {{"c", print_c}, {"s", print_s}, {"d", print_i_d}, {"i", print_i_d}, {"%", print_purcent}, {NULL, NULL}};

			int j = 0;

			while (print[j].op)
			{
				if (format[i + 1] == *print[j].op)
				{
					printed_chars += print[j].f(args);
					i++;
					break;
				}
				j++;
			}

			if (!print[j].op)
			{
				_putchar('%');
				_putchar(format[i + 1]);
				printed_chars += 2;
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
		i++;
	}

	va_end(args);
	return (printed_chars);
}

