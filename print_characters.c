#include "main.h"

/**
 * print_char - prints a character
 * @c: character to print
 * @f: flags
 * Return: character
 */
int print_char(va_list c, flags_t *f)
{
(void)f;
_putchar(va_arg(c, int));
return (1);
}

/**
 * print_string - prints a string
 * @str: string to print
 * @f: flags
 * Return: string
 */

int print_string(va_list str, flags_t *f)
{
char *s = va_arg(str, char *);

(void)f;

if (!s)
s = "(null)";
return (_puts(s));
}

/**
 * print_percent - prints a percent sign
 * @c: character to print
 * @f: flags
 * Return: character
 */

int print_percent(va_list c, flags_t *f)
{
(void)c;
(void)f;
return (_putchar('%'));
}
