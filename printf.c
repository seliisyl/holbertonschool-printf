#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: string of char
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				putchar(va_arg(args, int));
				count++;
			} else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				while (*str != '\0')
				{
					putchar(*str++);
					count++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				count++;
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return (count);
}

