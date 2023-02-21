/**
 * main - entry point of our program
 * return - terminates function main
 */
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	void print_alphabet();
	return 0;
}
void print_alphabet(void)
{
	char az = 'a';
	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	putchar('\n');
}
