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
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (NULL);
}
