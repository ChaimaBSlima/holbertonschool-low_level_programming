#include "main.h"
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
	int j;
	int a;

	for (a = 0; a < 11; a++)
	{
		i = -1;
		j = 0;
		while (j < 5)
		{
			
			if (j == 0)
			{
				i++;
			}
			if ((i > 9) || (j != 0))
			{
				i = 1;
				_putchar(j + '0');
				j++;
			}
			_putchar(i + '0');
		}

		_putchar('\n');
	}
}
