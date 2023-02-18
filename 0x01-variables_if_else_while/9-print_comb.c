/**
 * Main function starts our program
 * Return function terminates main function
*/
#include <stdio.h>

int main(void)
{
int num;
int i =0;
 
for (num = 0; num <= 9; num++)
  {
  putchar('0' + num);
  if (num < i + 1 && i != 9)
  {
  putchar(',');
  putchar(' ');
  i++;
  }
  }
 
 putchar('\n');
 return (0);
}
