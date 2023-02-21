/**
 * main - entry point of our program
 * print_alphabet_x10 - prints 10 lines of the alphabet in lowercase
 * return - terminates main
 */
#include <stdio.h>
/* print_alphabet_x10 - prints 10 lines of the alphabet in lowercase */
void print_alphabet_x10(void)
{
	int i, a;
	
	for (i = 0; i < 10; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
