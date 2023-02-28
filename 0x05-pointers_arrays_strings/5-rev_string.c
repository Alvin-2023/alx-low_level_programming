#include <stdio.h>

/**
 * rev_string - Reverses a string using pointers
 * @s: A pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{

	if (s == NULL)
		return;

	char *end = s;
	char tmp;

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

