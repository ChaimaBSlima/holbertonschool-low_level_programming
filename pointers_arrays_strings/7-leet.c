#include "main.h"
#include <stdio.h>
/**
 * leet -a function that encodes a string into 1337.
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
			if (s[i] == l[j] || s[i] == l[j] - 32)
			{
				s[i] = n[j] + '0';
			}
		}
		i++;
	}
	return (s);
}
