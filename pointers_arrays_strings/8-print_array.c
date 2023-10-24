#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array -  a function that prints n elements
 * of an array of integers,
 * followed by a new line.
 * @a: the array name
 * @n: size of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i++;
		}
	printf("\n");
}
