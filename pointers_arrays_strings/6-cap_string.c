#include "main.h"
#include <stdio.h>
/**
 * string_toupper -a function that changes all lowercase
 * letters of a string to uppercase.
 * @s: the string of address s
 * Return: string value
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
