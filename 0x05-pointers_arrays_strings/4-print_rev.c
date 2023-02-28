#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line, to stdout
 * @str: A pointer to the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	if (s == NULL)
        	return;

    	int len = 0;
	while (*(s + len))
        	len++;

	for (int i = len - 1; i >= 0; i--)
		putchar(*(s + i));

    putchar('\n');
}

