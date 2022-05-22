#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 * Return: character
 */
int print_char(va_list c)
{
char ch;
ch = va_arg(c, int);
_putchar(ch);
return (1);
}

/**
 * print_string - prints a string
 * @s: string to print
 * Return: string
 */

int print_string(va_list str)
{
char *s;

s = va_arg(str, char *);
if (!s)
s = "(null)";
return (_puts(s));
}
