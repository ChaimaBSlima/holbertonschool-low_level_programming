#include "main.h"
#include <stdio.h>
/**
 * cap_string - a function that capitalizes
 * all words of a string.
 * @s: the string of address s
 * Return: string value
 */
char *leet(char *s)
{
	int i;
	int j;
	char l[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*s == l[j] || *s == l[j] - 32)
			{
				*s = n[j] + '0';
			}
		}
		i++;
	}
	return (s);
}
