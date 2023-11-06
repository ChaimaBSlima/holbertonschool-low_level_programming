#include "main.h"
/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: The width of the matrix
 * @height: The height of the matrix
 * Return: the array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
				array[i][j] = 0;
		}
	}
	return (array);
}
