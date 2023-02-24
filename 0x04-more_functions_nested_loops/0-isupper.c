#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 * _isupper - tests whether a character is upper or lowercase and return 1 or 0
 * respectively
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
