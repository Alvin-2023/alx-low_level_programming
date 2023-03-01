/**
 * cap_string - capitalize all words in a string
 * @s: pointer to the string
 *
 * Return: pointer to the converted string
 */
#include "main.h"
#include <stdio.h>

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' 
			|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || 
			s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || 
			s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || 
			s[i - 1] == '}')
	{
		s[i] = (s[i] >= 'a' && s[i] <= 'z') ? s[i] - 32 : s[i];
	}
	}

	return s;
}
