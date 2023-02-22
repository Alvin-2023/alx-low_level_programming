#include <stdlib.h>

int _putchar(char c);

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		num = -num;

	last_digit = num % 10;

	char digit_char = last_digit + '0';

	_putchar(digit_char);
	_putchar('\n');

	return (last_digit);
}
