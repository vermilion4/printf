#include "main.h"

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct.
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list, flags_t *)
{
ph func_arr[] = {
{'s', print_string},
{'c', print_char},
{'%', print_percent},
{'i', print_int},
{'d', print_int},
{'u', print_unsigned},
{'b', print_binary},
{'o', print_octal},
{'x', print_hex},
{'X', print_hex_big},
{'S', print_bigS},
{'p', print_address},
{'R', print_rot13},
{'r', print_rev}
};
int flags = 14;

register int i;

for (i = 0; i < flags; i++)
if (func_arr[i].c == s)
return (func_arr[i].f);
return (NULL);

}
