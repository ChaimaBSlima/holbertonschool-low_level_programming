#include "main.h"
/**
 * print_binary - a function that prints
 *  the binary representation of a number.
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	int len = 0;
	int i, a = 1;
	int b;
	unsigned int p;

	for (i = 0; i < 64; i++)
	{
		p = ((a << (63 - i)) & n);
		if (p >> (63 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			putchar(b + 48);
			len++;
		}
	}
	if (len == 0)
	{
		putchar('0');
	}
}
