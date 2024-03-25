#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - function that produces output according to a format
 * @format: string that contains format specifiers and any additional text
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
				/* Récupé le caractère de la liste dargument */
				printf("%c", ch); /* Imprime le caract�re */
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				/* Récupé la chaîne de caractères de la listargument */
				printf("%s", str); /* Imprime la chaîne de caacteres */
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

