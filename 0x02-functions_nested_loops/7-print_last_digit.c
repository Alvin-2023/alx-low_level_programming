#include <stdlib.h>

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		num = -num;

	last_digit = num % 10;

	char buffer[2];
	buffer[0] = last_digit + '0';
	buffer[1] = '\0';

	puts(buffer);

	return (last_digit);
}
