#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>

typedef struct spec_s
{
char specifier;
int (*f)(va_list);
} spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int print_char(va_list c);
int print_string(va_list str);
int print_percent(va_list c);
int _strlen(va_list str);
int (*get_func(char s))(va_list);

#endif
