#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @nld: number's last dgit result
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int nld;
       
	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');

	return (pld);
}
