#include <stdio.h>
/**
 * print_most_numbers -prints the numbers,
 * from 0 to 9, followed by a new line.
 * except 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
    int i;
    char j;

    for (i = 48; i < 58; i++)
    {
        if ((i != 50) && (i != 52))
        {
            j = i;
            putchar(j);
        }
    }
    putchar('\n');
}
