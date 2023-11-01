#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - a function that fills
 * memory with a constant byte.
 * @s: the string
 * @b : the string to add
 * @n: the size of matrix
 * Return: string value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
