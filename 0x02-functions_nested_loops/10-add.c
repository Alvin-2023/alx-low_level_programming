/**
 * main - entry point of our function
 * return - terminate main function
 */
#include "main.h"
#include <stdio.h>

#include <stdio.h>

int add(int a, int b) {
	int sum = a + b;
	char buffer[50];
	int i = 0;

	/* convert the sum to a string */
	if (sum == 0) {
		_putchar('0');
		return 0;
	}
	if (sum < 0) {
		_putchar('-');
		sum = -sum;
	}
	while (sum != 0) {
		buffer[i++] = (sum % 10) + '0';
		sum /= 10;
	}

	/* print the sum in reverse order */
	while (i > 0) {
		_putchar(buffer[--i]);
	}

	_putchar('\n');
	return 0;
}
