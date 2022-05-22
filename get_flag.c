#include "main.h"

/**
 * get_flag - gets the flag associated with a specifier
 * @s: specifier
 * @flags_t: flags
 * Return: flag
 */
int get_flag(char s, flags_t *f)
{
int i = 0;

switch (s)
{
case '+':
f->plus = 1;
i = 1;
break;
case ' ':
f->space = 1;
i = 1;
break;
case '#':
f->hash = 1;
i = 1;
break;
}

return (i);
}
