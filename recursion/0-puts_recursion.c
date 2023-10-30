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
	}
	printf("%c", *s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
