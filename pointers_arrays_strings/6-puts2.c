#include "main.h"
#include <stdio.h>
/**
 * puts2 - a function that prints every other character
 * of a string, starting with the first character,
 * followed by a new line.
 * @str: the string of address str
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int j;
	j = 0;
	i = 0;
	while (*(str + i) != '\0')
	{
		if (str[j] == '\0' )
		{
			break;
		}
		_putchar(str[i]);
		i = i + 2;
		j++;
	}
	_putchar('\n');
}
