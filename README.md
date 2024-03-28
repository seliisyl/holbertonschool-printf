
# Project _printf

The printf function is a custom C function designed to output formatted text and variables to the standard output. It replicates the functionality of the standard C library function printf printing data types, such as characters, strings, and integers, using format specifiers.

## DESCRIPTION

The _printf function takes a format string as its first input. This string contains special placeholders where values will be inserted, known as "format specifiers" like %c, %s, %d, and %i. When _printf is called, it goes through the format string and replaces these placeholders with the corresponding values provided afterward. In simpler terms, _printf gets a string with placeholders, fills them with given values, and prints the formatted result.

## COMPILATION

Your code will be compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## REQUIREMENTS

* Used editor : VI
* All files will be compiled on Ubuntu 20.04 LTS
* Code must follow the Betty style
* Global variables are not allowed
* No more than 5 functions per file
* All prototypes for functions should be included in the header file main.h
* Authorized functions and macros:
    write (man 2 write),
    malloc (man 3 malloc),
    free (man 3 free),
    va_start (man 3 va_start),
    va_end (man 3 va_end),
    va_copy (man 3 va_copy),
    va_arg (man 3 va_arg).

## EXAMPLES

#include <stdio.h>
#include "main.h"

int main()
{
    int chars_printed;

    chars_printed = _printf("Let's try to printf a simple sentence.\n");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Length:[%d, %i]\n", 39, 39);
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Negative:[%d]\n", -762534);
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Character:[%c]\n", 'H');
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("String:[%s]\n", "I am a string !");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Percent:[%%]\n");
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Len:[%d]\n", 12);
    printf("Number of characters printed: %d\n", chars_printed);

    chars_printed = _printf("Unknown:[%r]\n");
    printf("Number of characters printed: %d\n", chars_printed);

    return (0);
}

## MAN PAGE

You can find the man page for _printf [here](man_3_printf).

## TESTING + valgrind



## FLOWCHART

![flowchart](https://files.slack.com/files-pri/T0423U1MW21-F06RTUMAS3U/image.png)


## BUGS

no know bugs

## AUTHORS

SYLLA Selimata
ONIER Pauline
