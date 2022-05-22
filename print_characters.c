#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 * Return: character
 */
void print_char(va_list c)
{
char ch;
ch = va_arg(c, int);
_putchar(ch);
}

/**
 * print_string - prints a string
 * @str: string to print
 * Return: string
 */

void print_string(va_list str)
{
char *s;

s = va_arg(str, char *);
while (*s)
{
_putchar(*s);
s++;
}
}