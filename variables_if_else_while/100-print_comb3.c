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
	int k;

	k = 0;
	for (i = 0; i < 10; i++)
	{

		for (j = k; j < 10; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		k++;
	}
	putchar('\n');
	return (0);
}
