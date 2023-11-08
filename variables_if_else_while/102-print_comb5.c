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
	int a;
    int b;

	for (i = 0; i < 7; i++)
	{

		for (j = i + 1; j < 8; j++)
		{
			for (a = j + 1; a < 9; a++)
			{
				for (b = b + 1; b < 10; a++)
			{
				putchar(i + '0');
				putchar(j + '0');
                putchar(' ');
				putchar(a + '0');
                putchar(b + '0');
				if (i != 9 || j != 8 || a != 9 || b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
