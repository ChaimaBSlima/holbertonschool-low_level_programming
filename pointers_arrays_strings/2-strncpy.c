#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncpy -a function that copies a string.
 * @dest: the string
 * @src: the string
 * @n: int byte
 * Return: string value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
