#include "main.h"
/**
 * _puts_recursion - a function that prints a string,
 * followed by a new line.
 * @s: The string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		printf("%c", '\n');
	}
	else if (*(s + 1) == '\0')
	{
		printf("%c", *s);
		printf("%c", '\n');
	}
	else
	{
		printf("%c", *s);
	}
	_puts_recursion(s + 1);
}
