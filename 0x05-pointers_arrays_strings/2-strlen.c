/**
 * string_length - Returns the length of a string.
 *
 * @str: A pointer to the string to get the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	const char *ptr = str; /* Pointer to the beginning of the string */
	while (*ptr != '\0') /* Loop until the null terminator is found */
	{
		ptr++; /* Increment the pointer */
	}
	return (ptr - str); /* Return the length of the string */
}

