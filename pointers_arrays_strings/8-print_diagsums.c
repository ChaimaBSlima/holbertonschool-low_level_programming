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
	int d1 = 0;
	int d2 = 0;
	int i = 0;

	while (i < size)
	{
		d1 = d1 + a[i * (size + 1)];
		d2 = d1 + a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, ", d1);
	printf("%d", d2);
	printf("\n");
}
