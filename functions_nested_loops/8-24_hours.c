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

	for (i = 0; i < 23; i++)
	{
		if (i < 10)
		{
			_putchar('0');
			_putchar(i + '0');
		}
		else
		{
			_putchar(i + '0');
			_putchar(':');
		}
		for (i = 0; i < 60; i++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
				_putchar('\n');
			}
			else
			{
				_putchar(i + '0');
				_putchar('\n');
			}
		}
	}
}
