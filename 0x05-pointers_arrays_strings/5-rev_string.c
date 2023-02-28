#include <stdio.h>

/**
 * rev_string - Reverses a string using pointers
 * @s: A pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *end = s;
	char tmp;

	if (s == NULL)
		return;

	while (*end != '\0')
		end++;

	end--;

	while (s < end)
	{
		tmp = *s;
		*s++ = *end;
		*end-- = tmp;
	}
}

