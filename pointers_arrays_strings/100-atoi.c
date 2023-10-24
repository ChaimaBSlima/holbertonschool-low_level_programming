#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strcpy -a function that convert a string to an integer.
 * @s: the string
 * Return: int value
 */
int _atoi(char *s)
{
	int a;
	int i;
	char ch[] = "";

	i = 0;
	a = 1;
	while (*(s + i) != '\0')
	{
		if (s[i] != '+' && s[i] != '-')
		{
			strcat(ch,s[i]);
		}
		if (s[i] == '-')
		{
			a = a * -1;
		}
		i++;
	}
	return (atoi(ch) * a);
}
