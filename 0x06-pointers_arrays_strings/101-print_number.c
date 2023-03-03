#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	for (; n < 0;)
	{
		_putchar('-');
		n = -n;
		_putchar('\n');
	}

	for (; n >= 0;)
	{
		_putchar(n);
		_putchar('\n');
	}
}
