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
 * @str: The string to print
 * Return: On success.
 */

int _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
return (i);
}
