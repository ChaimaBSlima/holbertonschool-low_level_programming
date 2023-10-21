#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i;
	unsigned long j;
	unsigned long s;

	i = 1;
	j = 2;
	s = 0;
	printf("%lu, ", i);
	printf("%lu, ", j);
	while (s < 4000000)
	{
		s = i + j;
		if (s % 2 == 0)
		{
			/*if (k != 50)
			{*/
				printf("%lu, ", s);
			/*}
			else
			{
				printf("%lu", s);
			}*/
		}
		i = j;
		j = s;
	}
	printf("\n");
	return (0);
}
