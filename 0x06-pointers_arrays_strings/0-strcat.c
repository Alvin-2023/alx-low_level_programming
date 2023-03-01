/**
 * _strncat - concatenates two strings.
 *
 * @dest: destination string.
 * @src: source string.
 * @n: maximum number of bytes to use from src.
 *
 * Return: a pointer to the resulting string dest.
 */
#include "main.h"
#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	/* Find the end of the destination string */
	while (*p != '\0')
	{
		p++;
	}

	/* Copy at most n bytes from the source string */
	int i = 0;
	while (i < n && *src != '\0')
	{
		*p++ = *src++;
		i++;
	}

	/* Null-terminate the destination string */
	*p = '\0';

	return (dest);
}
