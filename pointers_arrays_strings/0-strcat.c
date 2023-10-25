#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - a function that concatenates two strings.
 * @dest: the string
 * @src: the string
 * Return: string value
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
