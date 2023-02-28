/**
 * puts2 - prints every other character of a string, starting
 *                     with the first character
 *
 * @str: pointer to the string to print
 *
 * Return: void
 */
#include "main.h"
#include <stdio.h>

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i += 2;
	}

	_putchar('\n');
}

