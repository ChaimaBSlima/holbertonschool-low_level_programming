#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 48; i < 58 ; i++)
	{
		j = i;
		putchar(j);
	}
	for (i = 97; i < 103; i++)
	{
		j = i;
		putchar(j);
	}
	putchar('\n');
	return (0);
}
