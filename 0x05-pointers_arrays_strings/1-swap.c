#include "main.h"
#include <stdio.h>
/**
 * swap - function that swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Return: void
 */
void swap(int *a, int *b)
{
    int temp1, temp2;

    temp1 = *a;
    temp2 = *b;
    *a = temp2;
    *b = temp1;
}

