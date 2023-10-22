#include "main.h"
/**
 * print_number -  a function that prints an integer.
 * @n: The integer
 * Return: void
 */
void print_number(int n)
{ 
    while (n > 0)
    {
        _putchar( n % 10 + '0');
        n = n / 10;
    }
}