#include "main.h"
/**
 * print_alphabet- print alphabets
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: void
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
