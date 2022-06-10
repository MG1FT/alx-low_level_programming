#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the line character should be printed
 *
 * Return: no return
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}



