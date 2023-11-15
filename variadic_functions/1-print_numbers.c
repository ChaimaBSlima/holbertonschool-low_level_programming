#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers,
 * followed by a new line.
 * @separator: the separator
 * @n: the number of argument
 * @... : the numbers to print
 *
 * Return: int value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list argm;

	va_start(argm, n);
	if (separator)
	{
		while (i != 1)
		{
			printf("%d%s", va_arg(argm, int), separator);
			i--;
		}
		printf("%d\n", va_arg(argm, int));
	}
	va_end(argm);
}
