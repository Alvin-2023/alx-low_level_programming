/**
 * Main - entry point of our program
 * reset_to_98 - prints the re-evauluated int pointer
 * @n - is our variable pointer
 * @p - holds the value we update n with
 * Return - terminates main function
*/
#include <stdio.h>
#include "main.h"

void reset_to_98(int *n)
{
	int p;

	p = 98;
	*n = p; 
}
