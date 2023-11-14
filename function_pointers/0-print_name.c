#include "function_pointers.h"

/**
 * print_name -  a function that prints a name.
 * @name: the person name
 * @f: the function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
