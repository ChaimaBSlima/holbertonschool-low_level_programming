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
	int sum;

	i = 0;
	a = 1;
	sum = 0;
	while (*(s + i) != '\0')
	{
		if (s[i] == '-')
		{
			a = a * -1;
		}
		else if (*(s+i) >= '0' && *(s+i) <= '9')
			break;
		i++;
	}
	while (*s >= '0' && *s <= '9')
	{
		sum *= 10;
		sum += *s - '0';
		s++;
	}
	if (a == -1)
		return (-sum);
	else
		return (sum);
}
