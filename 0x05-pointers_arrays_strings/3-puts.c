#include <stdio.h>
#include "main.h"
/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: A pointer to the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	if (str == NULL)
	return;

	while (*str)
	putchar(*str++);

	putchar('\n');
}

