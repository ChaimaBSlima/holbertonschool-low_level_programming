#include "main.h"
/**
 * print_number -  a function that prints an integer.
 * @n: The integer
 * Return: void
 */
int powr(int a, int b)
{
	int i;
	int pw;
	i = 1;
	pw = a;
	while (i < b)
	{
		pw = pw * a;
		i++;
	}
	return pw;
}
int reverse(int n)
{
	int rev = 0;
	int i = 0;
	while (n > 0)
	{
		rev = rev + ((n % 10) * powr(10, i));
		n = n / 10;
		i++;
	}
	return rev;
}
void print_number(int n)
{
	if (n > 0)
	{
		n = reverse(n);
		while (n > 0)
		{
			_putchar(n % 10 + '0');
			n = n / 10;
		}
	}
	else if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		n = reverse(n);
		while (n > 0)
		{
			_putchar(n % 10 + '0');
			n = n / 10;
		}
	}
	else
	{
		_putchar('0');
	}
}