#include "main.h"
#include <stdio.h>
/**
 *  _puts - prints a string,
 * followed by a new line, to stdout
 * @str: the string of address str
 * Return: void
 */
void _puts(char *str)
{
	int i;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
