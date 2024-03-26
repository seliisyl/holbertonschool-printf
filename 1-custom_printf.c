#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * custom_printf - function that produces output according to a format
 * @format: string of char
 * Return:  the number of characters printed
 */
int custom_printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'i' || *format == 'd')
			{
				int num = va_arg(args, int); /* Ajout du point-virgule ici */
				/*Printing the integer with putchar */
				/* Assuming num is a single digit integer for simplicity */
				putchar(num + '0');
				printed_chars++;
			}
		}
		else
		{
			putchar(*format);
			printed_chars++;
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
