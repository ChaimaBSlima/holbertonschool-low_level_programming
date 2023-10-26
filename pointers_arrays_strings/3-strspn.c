#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - a function that gets the length
 * of a prefix substring.
 * @s: the string
 * @accept: the prefix
 * Return: int value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int v;

	v = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				v++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (v);
			}

			j++;
		}

		i++;
	}
	return (v);
}
