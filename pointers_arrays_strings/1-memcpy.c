#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - a function that copies memory area.
 * @dest: the string
 * @src : the source of the string
 * @n: the size of matrix
 * Return: string value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
