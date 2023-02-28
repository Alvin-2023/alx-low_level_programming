#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

#define PASSWORD_LENGTH 6

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	char *p;

	srand(time(NULL));

	p = password;

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		*p = rand() % 26 + 'A'; /* generate a random uppercase letter */
		p++;
	}

	*p = '\0'; /* add null terminator */

	printf("Random password: %s\n", password);

	return (0);
}

