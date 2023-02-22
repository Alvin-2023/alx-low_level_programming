/**
 * print_numbers - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		putchar(n / 10 + '0');
		putchar(n % 10 + '0');
		if (n < 98)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
}
