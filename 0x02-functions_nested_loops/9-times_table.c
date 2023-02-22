/**
 * main - entry point of our program
 * return - terminates main
 */
#include <stdio.h>
#include "main.h"

void times_table(void)
{
	int i, j, result;
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 1; j++)
		{
			if (j == 0)
			{
				/* Print the multiplication expression */
				_putchar('9');
				_putchar(' ');
				_putchar('x');
				_putchar(' ');
				_putchar(i + '0'); /* Convert integer to character */
				_putchar(' ');
				_putchar('=');
				_putchar(' ');
			}
			else
			{
				/* Print the multiplication result */
				result = 9 * i;
				if (result >= 10)
				{
					/* Print tens digit */
					_putchar(result / 10 + '0');
				}
				/* Print ones digit */
				_putchar(result % 10 + '0');
				/* Print newline character */
				_putchar('\n');
			}
		}
	}
}
