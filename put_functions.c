#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _puts - writes the string s to stdout
 * @s: The string to print
 * Return: On success.
 */

int _puts(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
return (i);
}
