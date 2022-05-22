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
int i;

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
print_char(args);
i++;
}
else if (format[i + 1] == 's')
{
i++;
print_string(args);
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
