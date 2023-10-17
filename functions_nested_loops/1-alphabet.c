#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	char j;

	for (i = 97; i < 123; i++)
	{
		j = i;
		_putchar(j);
	}
	_putchar('\n');
}