#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - a function that searches a string
 *  for any of a set of bytes..
 * @s: the string
 * @accept: the string 2
 * Return: string value
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (*s);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
