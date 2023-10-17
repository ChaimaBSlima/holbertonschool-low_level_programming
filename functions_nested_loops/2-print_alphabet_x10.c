#include "main.h"
/**
 * print_alphabet_x10 -print alphabets 10 times.
 * Description: prints the alphabet, in lowercase, 
 * followed by a new line, 10 times.
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char j;
	int a;

	for (a = 0; a < 10; a++)
	{
		for (i = 97; i < 123; i++)
		{
			j = i;
			_putchar(j);
		}
		_putchar('\n');
	}
}
