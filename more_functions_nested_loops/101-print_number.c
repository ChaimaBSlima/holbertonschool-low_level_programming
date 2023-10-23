#include "main.h"
/**
 * print_number -  a function that prints an integer.
 * @n: The integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
	}
	if ((n / 10) > 0)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
