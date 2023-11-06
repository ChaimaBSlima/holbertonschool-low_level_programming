#include "main.h"
/**
 * str_concat - a function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * Return: a string.
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
