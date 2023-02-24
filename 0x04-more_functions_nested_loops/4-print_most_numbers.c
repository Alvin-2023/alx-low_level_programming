/**
 * main - entry point of our program
 * return - terminates main
 * print_most_numbers - this function prints numbers from 0 to 9 except 2 & 4
 */
#include "main.h"
#include <stdio.h>

void print_most_numbers(void)
{
  char p;
  
  for (p = 48; p < 58; p++)
    if (p != 50 && p != 52)
      {
	putchar(p);
      }

  putchar('\n');
}
