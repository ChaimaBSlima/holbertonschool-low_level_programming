#include <stdio.h>
/**
 *print_numbers- Entry point
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;
	char j;

	for (i = 48; i < 58; i++)
	{
		j = i;
		putchar(j);
	}
	putchar('\n');
}