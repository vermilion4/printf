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
int i = 0;
int sum = 0;

va_start(args, format);

while (format[i] != '\0')
{
if (format[i] != '%')
{
_putchar(format[i]);
sum++;
}
else
{
if (format[i + 1] == 'c')
{
print_char(args);
sum ++;
i++;
}
else if (format[i + 1] == 's')
{
i++;
sum += _strlen(args);
print_string(args);

}
else if (format[i + 1] == '%')
{
i++;
_putchar('%');
sum++;
}
}
i++;
}
va_end(args);
return (sum);
}
