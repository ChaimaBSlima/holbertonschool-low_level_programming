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
	int i, j, sum;

	i = 0;
	j = 0;
	sum = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j || i + j == n - 1)
			{
				sum = sum + a[i][j];
			}
		}
	}
	return (sum);
}
