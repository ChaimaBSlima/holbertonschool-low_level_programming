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

	for (i = 97; i < 123; i++)
	{
        if (i!=101 && i!=113)
        {
		j = i;
		putchar(j);
         }
	}

	putchar('\n');
	return (0);
}