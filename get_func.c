#include "main.h"

/**
 * get_func - gets the function associated with a specifier
 * @c: specifier
 * Return: function pointer
 */

int (*get_func(char s))(va_list)
{
int i;

spec_t spec[] = {
{'c', print_char},
{'s', print_string},
{'%', print_percent},
{'\0', NULL}
};

for (i = 0; spec[i].specifier; i++)
{
if (spec[i].specifier == s)
return (spec[i].f);
}
return (NULL);

}
