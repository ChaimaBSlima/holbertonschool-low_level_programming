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

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
