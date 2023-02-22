/**
 * main - entry point of our program
 *return - terminates main
 */

#include <stdlib.h>
#include <stdio.h>

void int_abs(int num) {
	int abs_number = abs(num);
	if (num < 0) {
		putchar('-');
	}
	while (abs_number > 0) {
		putchar('0' + abs_value % 10);
		abs_number /= 10;
	}
	putchar('\n');
}
