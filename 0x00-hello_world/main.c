#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  FILE *fp;
    fp = fopen("$CFILE", "w");
  fprintf(fp, "Learning this cooking C\n");
  fclose(fp);
  return (0);
}
