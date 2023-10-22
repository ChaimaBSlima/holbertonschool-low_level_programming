#include "main.h"
/**
 * print_square - function that prints a square,
 * followed by a new line.
 * @n: The number of #
 * Return: void
 */
void print_number(int n)
{ 
    while (n > 0)
    {
        _putchar( n % 10 + "0");
        n = n / 10;
    }
}