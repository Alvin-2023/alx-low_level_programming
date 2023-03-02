/**
 * rot13 - Encodes a string using rot13
 * @s: The input string to be encoded
 *
 * Return: A pointer to the encoded string
 */
#include "main.h"
#include <stdio.h>

char *rot13(char *s)
{
	int i, j;
	char *res = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			j = s[i] - 'a';
			res[i] = (j + 13) % 26 + 'a';
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			j = s[i] - 'A';
			res[i] = (j + 13) % 26 + 'A';
		}
	}

	return (res);
}
