#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list c);
int print_string(va_list str);
int _strlen(va_list str);

#endif
