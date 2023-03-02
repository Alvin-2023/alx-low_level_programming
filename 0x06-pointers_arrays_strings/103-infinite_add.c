/**
 * infinite_add - Add two numbers.
 * @n1: First number.
 * @n2: Second number.
 * @r: Buffer to store the result.
 * @size_r: Buffer size.
 *
 * Return: Pointer to the result or 0 if it can't be stored in r.
 */
#include "main.h"
#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, lenr = 0;
	int i, j, k, carry = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 >= size_r || len2 >= size_r || len1 + 1 >= size_r || len2 + 1 >= size_r)
		return (0);

	n1 += len1 - 1;
	n2 += len2 - 1;
	for (i = 0, j = 0, k = 0; i < len1 || j < len2; i++, j++, k++)
	{
		if (i < len1)
			carry += n1[-i] - '0';
		if (j < len2)
		{
			carry += n2[-j] - '0';
			r[k] = (carry % 10) + '0';
			carry /= 10;
		}
	}
	if (carry)
	{
		if (k + 1 >= size_r)
			return (0);
			r[k++] = carry + '0';
	}
	r[k] = '\0';
	lenr = k;

	for (i = 0; i < lenr / 2; i++)
	{
		r[i] ^= r[lenr - 1 - i];
		r[lenr - 1 - i] ^= r[i];
		r[i] ^= r[lenr - 1 - i];
	}

	return (r);
}
