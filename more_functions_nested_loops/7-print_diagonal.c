#include "main.h"
#include <stdio.h>
/**
 * print_line -draws a straight
 * line in the terminal.
 * @n: The number of _
 * Return: void
 */
void print_diagonal(int n)
{
    if (n > 0)
    {
        int i;

        for (i = 0; i < n; i++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }
    else
    {
        _putchar('\n');
    }
}