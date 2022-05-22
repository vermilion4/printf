#include "main.h"

/**
 * get_func - gets the function associated with a specifier
 * @s: specifier
 * Return: function pointer
 */

int (*get_func(char s))(va_list, flags_t *)
{
int i;
spec_t spec[] = {
{'c', print_char},
{'s', print_string},
{'%', print_percent},
};

int flags = 3;
for (i = 0; i < flags; i++)
if (spec[i].c == s)
return (spec[i].f);

return (NULL);
}
