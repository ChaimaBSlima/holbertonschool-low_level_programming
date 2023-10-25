#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - a function that reverses the content of
 * an array of integers.
 * @a: the array
 * @n: number of elements of the array
 * Return: int value
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
