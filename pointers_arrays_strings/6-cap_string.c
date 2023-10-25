#include "main.h"
#include <stdio.h>
/**
 * string_toupper -a function that changes all lowercase
 * letters of a string to uppercase.
 * @s: the string of address s
 * Return: string value
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] = s[0] - 32;
	}
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i+1] >= 97 && s[i+1] <= 122 && s[i] == 32 )
		{
			s[i + 1] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
