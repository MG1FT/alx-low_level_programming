#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f = 'a';
	char h = 'A';

	while (f <= 'z')
	{
		putchar(f);
	       f++;
	}
	while (h <= 'Z')
	{
		putchar(h);
		h++;
	}

	putchar('\n');
	return (0);
}
