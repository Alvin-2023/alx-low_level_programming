/**
 * main - entry poin of our program
 * return - termnates main function
 */
#include "main.h"
#include <stdio.h>
#include <unistd.h>

int print_last_digit(int n)
{
	int lst = n % 10;

	if (lst > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lst);
	}
	else if (lst == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lst);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst);
	}
	return (0);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
