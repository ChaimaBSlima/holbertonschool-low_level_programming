#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - a function that searches a string
 *  for any of a set of bytes..
 * @s: the string
 * @accept: the string 2
 * Return: string value
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do
			{
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
