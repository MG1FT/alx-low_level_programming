#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		putchar(30 + j);
	}

	putchar('\n');
	return (0);
}

