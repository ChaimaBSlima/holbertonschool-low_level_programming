#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  _puts - prints a string,
 * followed by a new line, to stdout
 * @str: the string of address str
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len;

	len = strlen(str);
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2;
	}

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
