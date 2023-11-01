#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcmp -a function that compares two strings.
 * @s1: the string
 * @s2: the string
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int a;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	a = s1[i] - s2[i];
	return (a);
}
