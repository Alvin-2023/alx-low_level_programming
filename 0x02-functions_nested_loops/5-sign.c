/**
 * main - entry point of our program
 * return - terminates main
 */
#include <stdio.h>
#include <stdlib.h>

int print_sign(n)
{
	int n;
	char plus = '+';
	char minus = '-';
	if (n > 0)
	{
		putchar('+');
		return plus;
	}
	else if (n = 0)
	{
		putchar('0');
		return 0;
	}
	else
	{
		putchar('-');
		return minus;
	}
	return (0);
}
