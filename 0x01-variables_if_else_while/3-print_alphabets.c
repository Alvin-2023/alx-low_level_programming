/**
 * main - prints alphabets. Both lower and uppercase
*/

#include <stdio.h>

int main()
{
  char alphabets;

  for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
  {
    putchar(alphabets);
  }

  for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
  {
  putchar(alphabets);
  }
  
  putchar('\n');
  return 0;
}
