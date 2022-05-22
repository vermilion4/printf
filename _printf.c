#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * _printf - produces output according to a format
 * @format: format to print
 * Return: output
 */
int _printf(const char *format, ...)
{
va_list args;
int i;
int (*f[3])(va_list);

f[0] = &print_char;
f[1] = &print_string;
f[2] = NULL;

va_start(args, format);
i = 0;

while (format[i])
{
if (format[i] == '%')
{
i++;
if (format[i] == 'c')
f[0](args);
else if (format[i] == 's')
f[1](args);
else if (format[i] == '%')
write(1, "%", 1);
else
{
write(1, "%", 1);
write(1, &format[i], 1);
}
}
else
write(1, &format[i], 1);
i++;
}

va_end(args);
return (i);
}
