#include <stdlib.h>

int print_last_digit(int num)
{
	int last_digit;
	char digit_char;

	if (num < 0)
		num = -num;

	last_digit = num % 10;
	digit_char = last_digit + '0';

	write(1, &digit_char, 1);

	return (last_digit);
}
