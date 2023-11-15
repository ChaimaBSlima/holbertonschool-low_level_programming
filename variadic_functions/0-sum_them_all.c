#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the
 * sum of all its parameters.
 * @n: the number of arguments
 * @... : the numbers to sum
 *
 * Return: int value
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	int i = n;
	va_list argm;

	if (!n)
	{
		return (0);
	}
	va_start(argm, n);
	while (i != 0)
	{
		sum += va_arg(argm, int);
		i--;
	}
	va_end(argm);
	return (sum);
}
