#include "main.h"
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: the element of the array
 * Return: the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
