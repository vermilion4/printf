#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: format to print
 * Return: output
 */
int _printf(const char *format, ...)
{
va_list args;
int i, k;
char *str;

va_start(args, format);

i = 0;
while (format[i])
{
if (format[i] != '%')
_putchar(format[i]);
else
{
if (format[i + 1] == 'c')
{
_putchar(va_arg(args, int));
i++;
}
else if (format[i + 1] == 's')
{
i++;
str = va_arg(args, char *);
k = 0;
while (str[k])
{
_putchar(str[k]);
k++;
}
}
else if (format[i + 1] == '%')
{
i++;
_putchar('%');
}
}
i++;
}
va_end(args);
return (i);
}
