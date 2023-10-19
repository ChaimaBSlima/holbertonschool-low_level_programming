#include "main.h"
#include <stdio.h>
/**
 * print_square - function that prints a square,
 * followed by a new line.
 * @n: The number of #
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
