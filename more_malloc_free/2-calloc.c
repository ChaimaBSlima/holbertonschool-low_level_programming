#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: array length
 * @size: size of each element
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	a = malloc(size * nmemb);
	if (a == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		a[i] = 0;
		i++;
	}
	return (a);
}
