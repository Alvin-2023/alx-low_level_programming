/**
 * main - entry point of our program
 * return - terminates main
 */
#include <stdio.h>
void print_alphabet_x10() {
	int i, a;
	for (i = 0; i < 10; i++) {
		for (a = 97; a <= 122; a++) {
			putchar(a);
		}
		putchar('\n');
	}
	putchar('\n');
	putchar('\n');
}

int main() {
	print_alphabet_x10();
	return 0;
}
