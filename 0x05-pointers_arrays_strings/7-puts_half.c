/**
 *puts_half - Prints half of a string, followed by a new line
 * @str: The input string to be processed
 */
#include "main.h"
#include <stdio.h>

void puts_half(char *str)
{
	int length = 0, i;

	/* Determine the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Print the first half of the string */
	for (i = 0; i < length / 2; i++)
	{
		putchar(str[i]);
	}

	/* Print a new line character */
	putchar('\n');
}

