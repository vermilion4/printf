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
 * @str: string to print
 * Return: string
 */

int print_string(va_list str)
{
char *s;

s = va_arg(str, char *);

while (*s)
{
_putchar(*s);
s++;
}
return (1);
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
