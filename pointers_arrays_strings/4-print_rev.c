#include "main.h"
#include <stdio.h>
/**
 *  print_rev - prints a string,
 *  in reverse, followed by a new line.
 * @s: the string of address s
 * Return: void
 */
void print_rev(char *s)
{
	int j;
	int i;

	for (i = 0; *(s + i) != '\0'; ++i)
		;

	j = i;
	while (*(str + j) != str[0])
	{
		_putchar(str[j]);
		j--;
	}
	_putchar('\n');
}
