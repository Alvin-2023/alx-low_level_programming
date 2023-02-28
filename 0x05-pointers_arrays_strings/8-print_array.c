#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 *               followed by a new line.
 *
 * @a: the array to print.
 * @n: the number of elements to print.
 *
 * Return: void.
 */
#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i;

	if (a != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);

			if (i < n - 1)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
}

