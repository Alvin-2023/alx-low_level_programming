/**
 * main - entry point of our program
 * return - terminates the main function
 * print_numbers - prints numbers from 0 to 9
 */
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void print_numbers(void)
{
  int p;
  for (p = 48; p < 58; p++)
    {
      putchar(p);
    }
  putchar('\n');
}
