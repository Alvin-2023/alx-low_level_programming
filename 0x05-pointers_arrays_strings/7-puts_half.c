/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: The input string to be processed
 */
void puts_half(char *str)
{
    int length = 0, i, start_index;

    /* Determine the length of the string */
    while (str[length] != '\0')
    {
        length++;
    }

    /* Determine the starting index of the second half of the string */
    if (length % 2 == 0)
    {
        start_index = length / 2;
    }
    else
    {
        start_index = (length - 1) / 2 + 1;
    }

    /* Print the second half of the string */
    for (i = start_index; i < length; i++)
    {
        putchar(str[i]);
    }

    /* Print a new line character */
    putchar('\n');
}

