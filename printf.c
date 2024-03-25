#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: chaine de format
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++; /* Passer le '%' */

			if (*format == 'c')
			{
				int ch = va_arg(args, int);
				/* Récupérer le caractère de la liste d'argent */
				printf("%c", ch); /* Imprimer le caractèr */
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				/* Récupérer la chaîne de caractères de la liste gument */
				printf("%s", str); /* Imprimer la chaîne de caracere*/
			}
			else
			{
				putchar('%');
			/* Si le caractère suivant '%'est ni 'c' ni 's', imprimer simplement '' */
				putchar(*format);
			}
		}
		else
		{
			putchar(*format);
		/*  Si ce n'est pas un spécificateur, imprimer simplement le caractre*/
		}
		format++;
		/* Passer au prochain caractère dans la chaîne de forma*/
	}

	va_end(args); /* Terminer l'utilisation de la liste d'arguments variables */
	return (0);
}

