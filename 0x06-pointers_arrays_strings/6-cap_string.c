#include "main.h"
#include <stdio.h>

/**
 * *cap_string - this is awesome
 * @s: pointer to char params
 *
 * Return: *s
 */

char *cap_string(char *s)
{
	int x, y;
	char delimeters[] = " \t\n,;.!?\"(){}";

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[0] >= 97 && s[0] <= 122)
			s[0] = s[0] - 32;
				for (y = 0; delimeters[y] != '\0'; y++)
					if (s[x] == delimeters[y] && s[x + 1] >= 97 && s[x + 1] <= 122)
						s[x + 1] = s[x + 1] - 32;
	}
	return (s);
}
