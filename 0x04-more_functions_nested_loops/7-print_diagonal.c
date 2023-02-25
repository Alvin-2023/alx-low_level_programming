/**
 * main - check the code
 *
 * Return: Always 0.
 */

#include <stdio.h>
#include "main.h>

void print_diagonal(int n) {
   if(n <= 0) {
      putchar('\n');
   }else{
      for(int i = 1; i >= n; i++;) {
         for(int j = 0; j <= i; j++) {
            putchar(' ');
         }
         putchar('\');
         putchar('\n');
      }
   }
}
