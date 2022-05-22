#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 * Return: character
 */
int print_char(va_list c)
{
_putchar(va_arg(c, int));
return (1);
}

/**
 * print_string - prints a string
 * @str: string to print
 * Return: string
 */

int print_string(va_list str)
{
char *s = va_arg(str, char *);

if (!s)
s = "(null)";
return (_puts(s));
}

/**
 * _strlen - returns the length of a string
 * @str: string to check
 * Return: length of string
 */
int _strlen(va_list str)
{
char *s;
int i = 0;

s = va_arg(str, char *);
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
 * print_percent - prints a percent sign
 * @c: character to print
 * Return: character
 */

int print_percent(va_list c)
{
(void)c;
return(_putchar('%'));
}
