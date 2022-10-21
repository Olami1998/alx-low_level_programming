#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: Variant text
 *
 * Return: Always (0)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
