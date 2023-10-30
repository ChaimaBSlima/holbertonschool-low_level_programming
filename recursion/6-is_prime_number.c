#include "main.h"
/**
 * prime - a function check for prime number
 * @x: The number
 * @y: divided by y
 * Return: int value
 */
int prime(int x, int y)
{
	if (x == y)
		return (1);
	if ((x % y) != 1)
		return (0);
	return (prime(x, y + 1));
}
/**
 *is_prime_number -a function that returns
 * the natural square root of a number.
 * @n: The number
 * Return: int value
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime(n, 2));
}
