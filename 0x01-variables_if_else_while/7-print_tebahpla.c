/**
 * main - starts our program
 * return - terminates main
*/

#include <stdio.h>

int main(void)
{
  char za;

  for (za = 'z'; za >= 'a'; za--)
  {
  putchar(za);
  }
  putchar('\n');
  return (0);
}
