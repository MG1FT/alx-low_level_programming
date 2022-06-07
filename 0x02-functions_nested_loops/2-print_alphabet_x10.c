#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int d = 0;
	char h;

	while (d < 10)
	{
		h = 'a';
		while (h <= 'z')
		{
			_putchar(h);
			h++;
		}
		_putchar('\n');
		d++;
	}
}
