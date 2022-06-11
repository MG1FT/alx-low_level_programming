#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: number of # and rows
 *
 * Return: no return
 */
void print_triangle(int size)
{
	int x, y, z, columns;

	columns = size - 1;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < columns; y++)
			{
				_putchar(' ');
			}
			columns--;
			for (z = 0; z < (x + 1); z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
