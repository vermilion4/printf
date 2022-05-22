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
    int n, b;

    n = _printf("%c\n", '\0');
    b = printf("%c\n", '\0');
    printf("n = %d\n", n);
    printf("b = %d\n", b);
    n = _printf("String:[%s]\n", "I am a string !");
    printf("%d\n", n);
    b = printf("String:[%s]\n", "I am a string !");

    n = _printf("Percent:[%%]\n");
    b = printf("Percent:[%%]\n");
    printf("n = %d\n", n);
    printf("b = %d\n", b);

    return (0);
}