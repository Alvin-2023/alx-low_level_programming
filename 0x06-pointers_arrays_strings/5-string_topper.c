/**
 * string_toupper - convert all lowercase letters in a string to uppercase
 * @s: pointer to the string
 *
 * Return: pointer to the converted string
 */
#include "main.h"
#include <stdio.h>

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= ('a' - 'A');
	}

	return (s);
}
