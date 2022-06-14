#include "main.h"
/**
 * swap_int - switches values of the first with value of the second input.
 * @a: First value to swap.
 * @b: Second value to swap.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
