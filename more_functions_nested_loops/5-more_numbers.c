#include <stdio.h>
/**
 * more_numbers -prints 10 times the numbers
 * from 0 to 14
 * followed by a new line.
 * Return: void
 */
void more_numbers(void)
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
