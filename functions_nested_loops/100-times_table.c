#include "main.h"
#include <stdio.h>
/**
 * print_times_table -a function that prints the n times table,
 * starting with 0.
 * @n: number times
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	if (n < 16 && n > -1)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				if (i * (j + 1) < 10)
				{
					if (j != n)
					{
						printf("%d,   ", i * j);
					}
					else
					{
						printf("%d", i * j);
					}
				}
				else if (i * (j + 1) < 100 && i * (j + 1) > 9)
				{

					if (j != n)
					{
						printf("%d,  ", i * j);
					}
					else
					{
						printf("%d", i * j);
					}
				}
				else
				{
					if (j != n)
					{
						printf("%d, ", i * j);
					}
					else
					{
						printf("%d", i * j);
					}
				}
			}
			printf("\n");
		}
	}
}
