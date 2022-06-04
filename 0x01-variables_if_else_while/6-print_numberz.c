#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, b = 10;

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	for (i = 0 ; i < b ; i++)
	{
		putchar(i < b % '0');
	}
	putchar('\n');

	return (0);
}
