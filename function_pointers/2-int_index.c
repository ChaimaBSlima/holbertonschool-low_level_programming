#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer.
 * @array: the array
 * @size: the array size
 * @cmp: the function
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
