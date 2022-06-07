#include "main.h"

/**
 * print_alphabet- print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char r;

	for (r = 'a' ; r <= 'z' ; r++)
	{
		_putchar(r);
	}

	_putchar('\n');
}
