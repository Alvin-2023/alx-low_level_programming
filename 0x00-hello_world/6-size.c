/**
 *Main - entry point of our program
 *@printf function - prints to the standard output size of a data type
 *@sizeof function - gives its output into printf
 *Return - terminates main function on success, return value of always '0"
*/
#include <stdio.h>

int main(void)
{
  printf("Size of a char: %zu \n", sizeof(char));
  printf("Size of an int: %zu \n", sizeof(int));
  printf("Size of a long: %zu \n", sizeof(long));
  printf("Size of a long long: %zu \n", sizeof(long long));
  printf("Size of a float: %zu \n", sizeof(float));

  return (0);
}
