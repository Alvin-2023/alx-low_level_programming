/**
 * Main - starting point of our program
 * For loop prints 'a' to 'z' except 'e' and 'q'
 * Return - terminates our program upon successful execution of our program
*/

#include <stdio.h>

int main(void)
{

char alphas;

 for (alphas = 'a'; alphas <= 'z'; alphas++)
 { if (alphas != 'e' && alphas != 'q')
     putchar(alphas);
 }
putchar('\n');
return (0);
}
