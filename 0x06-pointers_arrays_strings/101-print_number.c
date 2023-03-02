/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Return: void
 */
#include "main.h"
#include <stdio.h>

void print_number(int n)
{
	int div = 1;

		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		while (n / div >= 10)
			div *= 10;

		while (div != 0)
		{
			_putchar(n / div + '0');
			n %= div;
			div /= 10;
		}
}
