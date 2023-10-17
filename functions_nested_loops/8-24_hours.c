#include "main.h"
#include <stdio.h>
/**
 * jack_bauer -rints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59.
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				printf("0");
				printf("%d", i);
				printf(":");
			}
			else
			{
				printf("%d", i);
				printf(":");
			}
			if (j < 10)
			{
				printf("0");
				printf("%d", j);
				;
				printf("\n");
			}
			else
			{
				printf("%d", j);
				printf("\n");
			}
		}
	}
}
