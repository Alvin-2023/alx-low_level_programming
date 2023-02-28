#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line, to stdout
 * @s: A pointer to the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	if (s == NULL)
		return;

	while (*(s + len))
		len++;

	for (i = len - 1; i >= 0; i--)
		putchar(*(s + i));

	putchar('\n');
}

