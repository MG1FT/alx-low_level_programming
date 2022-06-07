#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;

    i = _abs(-1);
    printf("%d\n", i);
    i = _abs(0);
    printf("%d\n", i);
    i = _abs(1);
    printf("%d\n", i);
    i = _abs(-98);
    printf("%d\n", i);
    return (0);
}
