/**
 * _strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: negative if s1 is less than s2, positive if s1 is greater than s2,
 *         and 0 if s1 is equal to s2
 */
#include "main.h"
#include <stdio.h>

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (1);
}
