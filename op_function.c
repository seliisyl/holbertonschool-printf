#include <stdlib.h>
#include "main.h"

/**
 * _print_func - fonction pour se©lectionner la fonctio correct
 * @args: liste des arguments
 * @specifier: sp√©cificateur de format
 * Return: pointeur vers la fonction d'ope©ration correct
 */

int _print_function(va_list args, char specifier)
{ 
	int i = 0;
	
	_print_func print[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_i_d},
		{"i", print_i_d},
		{"%", print_purcent},
		{NULL, NULL},
	};

	while (print[i].op != NULL)
	{	
		if (specifier == *print[i].op)
		{
			return (print[i].f(args));
		}
		i++;
	}
	return (0);
}
