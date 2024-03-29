#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
int plus;
int space;
int hash;
int minus;
int zero;
unsigned int width;
unsigned int h_modifier;
unsigned int l_modifier;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
char c;
int (*f)(va_list ap, flags_t *f);
} ph;

int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *str);
int print_percent(va_list l, flags_t *f);
int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);
char *convert(unsigned long int num, int base, int lowercase);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int get_modifier(char *s, flags_t *f);
char *get_width(char *s, flags_t *f, va_list ap);
int _isdigit(int c);
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);

#endif
