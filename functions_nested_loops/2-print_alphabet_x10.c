#include "main.h"
/**
 * print_alphabet- print alphabets
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char j;
	int a;
	for (a = 0; a < 10 : a++)
	{
		for (i = 97; i < 123; i++)
		{
			j = i;
			_putchar(j);
		}
		_putchar('\n');
	}
}
