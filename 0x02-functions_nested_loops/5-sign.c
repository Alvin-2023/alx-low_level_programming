/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is positive, -1 if n is negative, and 0 otherwise
 */
#include "main.h"
#include <stdio.h>
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
