#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: the value of address a
 * @b: the value of address b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
