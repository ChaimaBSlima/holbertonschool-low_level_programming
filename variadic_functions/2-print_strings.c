#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings,
 * followed by a new line.
 * @separator: the separator
 * @n: the number of argument
 * @... : the numbers to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *ch;
	va_list argm;

	if (separator == NULL)
	{
		separator = "";
	}
	if (n != 0)
	{
		va_start(argm, n);
		while (i != 1)
		{
			ch = va_arg(argm, char *);
			if (ch == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", ch, separator);
			i--;
		}
		ch = va_arg(argm, char *);
		if (ch == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", ch);
	}
	else
		printf("\n");
	va_end(argm);
}
