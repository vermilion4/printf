#include "main.h"
#include <stdarg.h>
#include <unistd.h>

int print_format(const char *format, ...);

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
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
            {
                print_char(args);
            }
            else if (format[i] == 's')
            {
                print_string(args);
            }
            else
            {
                _putchar('%');
                _putchar(format[i]);
            }
        }
        else
        {
            _putchar(format[i]);
        }
        i++;
    }
    va_end(args);
    return (i);
}
