#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that prints a name.
 * @name: name to print
 * @f: function to print with
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
