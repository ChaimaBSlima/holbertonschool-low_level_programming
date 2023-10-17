#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @c:The number
 * Return: int value
 */
int print_last_digit(int c)
{
	int n;

	n = c % 10;
	if (c < 0)
	{
		n = -1 * n;
	}
	putchar(n + '0');
	return (n);
}
