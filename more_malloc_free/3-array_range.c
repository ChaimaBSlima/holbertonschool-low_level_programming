#include "main.h"

/**
 * array_range -a function that creates an array of integers.
 * @min: minimum number
 * @max: maximum number
 * Return: a pointer
 */
int *array_range(int min, int max)
{
	int *a;
	int i;
	int n;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min + 1;
	a = malloc(4 * n);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		a[i] = min++;
	}
	return (a);
}
