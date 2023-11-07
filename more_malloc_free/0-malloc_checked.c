#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: int value
 * Return: pointer or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
	{
		exit(98);
	}
	return (a);
}
