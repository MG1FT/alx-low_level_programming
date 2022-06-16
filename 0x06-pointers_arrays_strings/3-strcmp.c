#include "main.h"

/**
 * _strcmp - compare
 * @s1 : pointerto char params
 * @s2 : pointer to char params
 *
 * Return: *dest
 */

int _strcmp(char *s1, char *s2)
{
	int m;
	int k;

	m = 0;

	while (s1[m] == s2[m] && (s1[m] != '\0' || s2[m] != '\0'))
	{
		m++;
	}
	k = s1[m] - s2[m];
	return (k);
}
