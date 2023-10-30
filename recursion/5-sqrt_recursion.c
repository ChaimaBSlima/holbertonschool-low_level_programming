#include "main.h"
/**
 * find_root - a function that prints
 *  a string, followed by a new line.
 * @n: The number
 * @i: root by i
 * Return: int value
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (find_root(n, i + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion -a function that prints
 *  a string, followed by a new line.
 * @n: The number
 * Return: int value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_root(n, 2));
}
