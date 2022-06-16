#include "main.h"

/**
 * _strncpy - two words
 * @dest : pointer to char params
 * @src : pointer to char params
 * @n : int params
 * 
 * Return: *dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}

	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}

	return (dest);
}
