#include <stdio.h>
#include "main.h"

/**
* main - prints program name
*@argc: number of arguments
*@argv: array of arguments
*Return: 0
*/
int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
