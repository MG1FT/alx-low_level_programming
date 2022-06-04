#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char n;

	for (i = 0; i < 10 ; i++)
		putchar((i % 10) + '0');

	for (n = 'a'; n <= 'f' ; n++)
		putchar(n);

	putchar('\n');

	return (0);
}

