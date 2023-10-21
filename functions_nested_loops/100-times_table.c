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

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i * (j + 1) < 10)
			{
				if (j != 9)
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

				if (j != 9)
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
