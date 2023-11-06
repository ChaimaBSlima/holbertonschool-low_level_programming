#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *create_array(unsigned int size, char c)
{
	char array;
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = (char *)malloc(size * sizeof(char));
		for (i = 0; i < size; i++)
			array[i] = c;
	}
	return (array);
}