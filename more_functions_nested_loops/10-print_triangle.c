#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle,
 * followed by a new line.
 * @n: The size of the triangle
 * Return: void
 */
void print_triangle(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j < n - i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}