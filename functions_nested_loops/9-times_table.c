#include "main.h"
#include <stdio.h>
/**
 * times_table -a function that prints the 9 times table,
 * starting with 0.
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ,", i * j)
		}
		printf("\n")
	}
}
