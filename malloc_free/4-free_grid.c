#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid previously 
 * created by your alloc_grid function.
 * @grid:  the matrix
 * @height: The height of the matrix
 * Return: the array
 */
void free_grid(int **grid, int height)
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
				free(array[i][j]) ;
		}
	}
	return (array);
}
