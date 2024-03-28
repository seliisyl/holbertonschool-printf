#include "main.h"
#include <stdarg.h>

/**
 * print_id - print i and d and sends them to int and deci
 * @n: number to be printed
 * Return: the correct count
 */

int print_i_d(va_list args)
{
	int n = va_arg(args, int);
	int char_count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		char_count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	char_count += print_digits(num);
	return (char_count);
}
/**
 * print_digits - Recursively print digits of an integer
 * @num: the number to print
 * Return: the number of characters printed
 */
int print_digits(unsigned int num)
{
	int char_count = 0;

	if (num / 10 != 0)
	{
		char_count += print_digits(num / 10);
	}

	_putchar((num % 10) + '0');
	char_count++;

	return char_count;
}
