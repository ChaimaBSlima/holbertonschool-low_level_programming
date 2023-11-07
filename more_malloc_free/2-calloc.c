#include "main.h"

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n : limits of s2
 * Return: a string.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *array;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * nmemb);
	if (a == 0)
	{
		return (NULL);
	}
	array = a;
	while (nmemb--)
	{
		*array++ = 0;
	}
	return (a);
}
