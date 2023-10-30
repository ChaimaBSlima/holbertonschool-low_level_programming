#include "main.h"
/**
 * _print_rev_recursion - a function that prints
 *  a string in reverse.
 * @s: The string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		printf("%c", *s);
		_print_rev_recursion(s + 1);
	}
}
