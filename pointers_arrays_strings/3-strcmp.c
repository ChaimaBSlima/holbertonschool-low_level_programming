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
int _strcmp(char *s1, char *s2)
{
	int i;
	int a;

	i=0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	a = s1[i] - s2[i];
	return (a);
}

