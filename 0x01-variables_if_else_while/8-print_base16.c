/**
 * Main - starts our program
 * Return - terminates main function
*/
#include <stdio.h>

int main(void)
{
char af;
int num;
 
for (num = 0; num < 10; num++)
  {
  putchar('0' + num);
  }
for (af = 'a'; af <= 'f'; af++)
  {
  putchar(af);
  }

putchar('\n');
return (0);
}
