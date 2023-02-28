/**
 * _strcpy - Copies the string pointed to by `src` to the buffer pointed to
 * by `dest`, including the terminating null byte (\0).
 *
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the destination buffer (`dest`).
 */
#include "main.h"
#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	char *start = dest;
	
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
