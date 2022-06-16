#include <unistd.h>

/**
 * _putchar - writes the characters c to stdout
 * @c: The character to print
 *
 * Return: On the sucess 1.
 * on error, -1 is the return, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
