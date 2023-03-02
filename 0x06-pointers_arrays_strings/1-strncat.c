/**
 * _strncat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes from src to use
 *
 * Return: pointer to the resulting string dest
 */
#include "main.h"
#include <stdio.h>

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *dest_ptr = dest;

	/* Find the end of the destination string */
	while (*dest_ptr != '\0')
		dest_ptr++;

	/* Copy at most n bytes from the source string */
	while (i < n && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		i++;
	}

	/* Null-terminate the destination string */
	*dest_ptr = '\0';

	return (dest);
}
