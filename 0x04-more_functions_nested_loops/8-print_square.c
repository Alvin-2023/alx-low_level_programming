/**
 * main - check the code
 *
 * Return: Always 0.
 */
#include <stdio.h>
#include "main.h"

void print_square(int size);

void print_square(int size)
{
  if (size <= 0)
    {
      putchar('\n');
    }
  else if (size > 0)
    {
      for (size > 0)
	{
	  for (size > 0)
	    {
	      putchar('#');
	    }
	  putchar('#');
	}
    }
}
