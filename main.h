#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct flags - struct for flags
 * @plus: plus flag
 * @space: space flag
 * @hash: hash flag
 */

typedef struct flags
{
int plus;
int space;
int hash;
} flags_t;

/**
 * struct spec_s - struct for specifiers
 * @c: specifier
 * @f: function pointer
 */

typedef struct spec_s
{
char c;
int (*f)(va_list ap, flags_t *f);
} spec_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int print_char(va_list c, flags_t *f);
int print_string(va_list str, flags_t *f);
int print_percent(va_list c, flags_t *f);
int (*get_func(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);

#endif
