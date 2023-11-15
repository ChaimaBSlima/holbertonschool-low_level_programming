#include "variadic_functions.h"
/**
 * convert_char - print a character
 * @argm: list of characters arguments
 *
 * Return: void
 */
void convert_char(va_list argm)
{
	printf("%c", va_arg(argm, int));
}
/**
 * convert_int - print an integer
 * @argm: list of integers arguments
 *
 * Return: void
 */
void convert_int(va_list argm)
{
	printf("%d", va_arg(argm, int));
}
/**
 * convert_float - print a float number
 * @argm: list of float numbers arguments
 *
 * Return: void
 */
void convert_float(va_list argm)
{
	printf("%f", va_arg(argm, double));
}
/**
 * convert_string - print a string
 * @argm: list of string arguments
 *
 * Return: void
 */
void convert_string(va_list argm)
{
	char *ch;

	ch = va_arg(argm, char *);
	if (ch == NULL)
		ch = "(nil)";
	printf("%s", ch);
}
/**
 * print_all - a function that prints anything.
 * @format: format of arguments
 * @... : the arguments to print
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i = 0;
	int j;
	char *separator1 = "";
	char *separator2 = ", ";
	va_list argm;

	types_t types[] = {
		{'c', convert_char},
		{'i', convert_int},
		{'f', convert_float},
		{'s', convert_string},
		{'\0', NULL},
	};
	va_start(argm, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j].type)
		{
			if (format[i] == types[j].type)
			{
				printf("%s", separator1);
				types[j].function(argm);
				separator1 = separator2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(argm);
}
