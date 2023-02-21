/**
 * main - entry point of our program
 * return - terminates main
 */
#include <stdio.h>
/*void print_alphabet_x10(void)
{
	return (0);
}
*/
int main(void)
{
	char az[26] = "abcdefghijklmnopqrstuvwxyz";
	while (az[26] < az[261])
	{
		putchar(az[26]);
		putchar('\n');
	}
	return (0);
}
