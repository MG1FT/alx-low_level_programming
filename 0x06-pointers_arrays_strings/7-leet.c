#include "main.h"

/**
 * leet - encode
 * @s: pointer to char params
 *
 * Return: *s
 */

char *leet(char *s)
{
	int x;
	int y;
	char l[] = "ol_ea__t";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; l[y] != '\0'; y++)
		{
			if (s[x] == l[y] || s[x] == (l[y] - 32))
			{
				s[x] = y + '0';
			}
		}
	}
	return (s);
}
