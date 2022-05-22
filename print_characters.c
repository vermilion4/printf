#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success.
 */
int _putchar(char c)
{
write(1, &c, 1);
return (0);
}

/**
 * _strlen - prints length of string
 *
 * @s: pointer
 * Return: count (length of string)
 */

int _strlen(char *s)
{
int count = 0;

for (; *s != '\0'; s++)
count++;

return (count);
}

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

int print_string(va_list s)
{
char *str;

str = va_arg(s, char *);

for (; *str != '\0'; str++)
_putchar(*str);

return (1);
}
