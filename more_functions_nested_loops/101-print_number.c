#include "main.h"
/**
 * print_number -  a function that prints an integer.
 * @n: The integer
 * Return: void
 */
void print_number(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar(n % 10 + '0');
			n = n / 10;
		}
	}
	else if (n < 0)
	{
		_putchar('-');
		n = abs(n);
		while (n >= 0)
		{
			_putchar(n % 10 + '0');
			n = n / 10;
		}
	} else
	{
		_putchar('0');
	}
	
}