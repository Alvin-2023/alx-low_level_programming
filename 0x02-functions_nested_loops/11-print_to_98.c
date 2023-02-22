/**
 * print_numbers - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
#include <stdio.h>
#include "main.h"
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}
