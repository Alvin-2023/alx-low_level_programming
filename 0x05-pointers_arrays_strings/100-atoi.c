/**
 * _atoi - Converts a string to an integer
 *
 * @s: Pointer to the string to convert
 *
 * Return: The integer value of the string
 */
#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int sign = 1, result = 0;
	char *p = s;

	if (*p == '-')
	{
		sign = -1;
		p++;
	}
	else if (*p == '+')
	{
		p++;
	}

	while (*p != '\0')
    	{
        	if (*p < '0' || *p > '9')
        	{
            		break;
        	}

		result = result * 10 + (*p - '0');
		p++;
	}

	return sign * result;
}

