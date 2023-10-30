#include "main.h"
/**
 * _pow_recursion - a function that returns the value
 *  of x raised to the power of y.
 * @x: The number
 * @y: powred by y
 * Return: int value
 */
int _pow_recursion(int x, int y)
{
	if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
