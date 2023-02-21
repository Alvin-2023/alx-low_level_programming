/**
 * Main - entry point of our function
 * putchar - prints a string to the output
 * Return - always returns a value of 0 on success
 */
#include <stdio.h>
#include <stdlib.h>

int putchar(char);

int i;

int main(void)
{
	char strchar[] = "_putchar";

	for (int i = 0; strchar[i] != '\0'; i++)
	{
		putchar(strchar[i]);
	}

	return (0);
}
