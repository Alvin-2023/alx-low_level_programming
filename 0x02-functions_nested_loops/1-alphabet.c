/**
 * main - entry point of our program
 * return - terminates function main
 */
#include <stdio.h>
#include <stdlib.h>
/*print_alphabet - Prints letters of the alphabet in lowercase from 'a" to 'z'*/
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
