#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int print_char(va_list c);
int print_string(va_list s);

#endif
