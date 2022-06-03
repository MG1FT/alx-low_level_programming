#include <stdio.h>
/**
 * main Entry here
 *
 * Return is zero
 */
int main(void)
{
	int n;
	printf("\nEnter a number : ");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("\n%d : is positive\n", n);
	}
	if (n == 0)
	{
		printf("\n%d : is zero\n", n);
	}
	if (n < 0)
	{
		printf("\n%d : is negative\n", n);
	}
	return (0);
}
