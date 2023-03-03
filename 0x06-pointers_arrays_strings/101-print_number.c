#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer followed by a newline
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	putchar(n % 10 + '0');
}
