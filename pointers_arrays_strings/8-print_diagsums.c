#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums -a function that prints the sum of the two diagonals of
 *  a square matrix of integers.
 * @a: the array
 * @size: the size
 * Return: string value
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	i = 1; 
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < i)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
