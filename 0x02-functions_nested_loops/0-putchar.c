#include <unistd.h>

/**
 * -putchar - writes the character c to stdout
 *
 *  Return: (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1))
}
