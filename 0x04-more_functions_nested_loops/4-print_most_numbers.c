#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9 followed by a new line
* does not print 2 and 4
* Return: no return
*/
void print_most_numbers(void)
{
	int i;

	for (i = 20; i <= 29; i++)
	{
		if (i == 22 || i == 24)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
