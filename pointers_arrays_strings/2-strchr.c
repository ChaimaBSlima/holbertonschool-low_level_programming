#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string
 * @c: the character of the string
 * Return: string value
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
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
