#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * removeChar -a function that removes a character
 * from a string
 * @str: the string
 * @c: the character
 * Return: void
 */
void removeChar(char *str, char c)
{
	int i, j;
	int len = strlen(str);

	for (i = j = 0; i < len; i++)
	{
		if (str[i] != c)
		{
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
}
/**
 * _atoi -a function that convert a string to an integer.
 * @s: the string
 * Return: int value
 */
int _atoi(char *s)
{
	int a;
	int i;

	i = 0;
	a = 1;
	while (*(s + i) != '\0')
	{
		if (s[i] == '-')
		{
			a = a * -1;
		}
		i++;
	}
	i = 0;
	while (*(s + i) != '\0')
	{
		if (s[i] == '-' || s[i] == '+')
		{
			removeChar(s, s[i]);
		}
		i++;
	}
	return (atoi(s) * a);
}
