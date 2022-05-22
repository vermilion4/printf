#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int n;

    n = _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    printf("%d\n", n);
    n = _printf("String:[%s]\n", "I am a string !");
    printf("%d\n", n);
    printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    printf("%d\n", n);

    return (0);
}