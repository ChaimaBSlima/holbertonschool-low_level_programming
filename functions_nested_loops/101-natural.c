#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	j = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
		{
			j = j + i;
		}
	}
	while (j > 10)
	{
		_putchar(j % 10 + '0');
		j = j / 10;
	}
	return (0);
}
