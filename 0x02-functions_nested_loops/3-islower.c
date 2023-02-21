/**
 * main-entry point of our program
 * return - terminates main function
 */
/*_islower tests to see if a character is upper or lower case */
int _islower(int c)
{
	char c;

	if (isLower(c))
		return 1;
	else
		return 0;
}
