#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program entry point
 * Discription: prints a random num and whether it's positive, negative or zero
 * Return is zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("\n%i : is positive\n", n);
	}
	if (n == 0)
	{
		printf("\n%i : is zero\n", n);
	}
	if (n < 0)
	{
		printf("\n%i : is negative\n", n);
	}
	return (0);
}
