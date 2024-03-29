#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *charac;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		charac = va_arg(list, char*);
		if (charac == NULL)
			printf("(nil)");
		else
			printf("%s", charac);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
