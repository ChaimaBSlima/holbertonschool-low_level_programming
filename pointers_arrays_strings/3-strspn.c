#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string
 * @c: the character of the string
 * Return: string value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}
		i++;
	}
	return (i);
}
