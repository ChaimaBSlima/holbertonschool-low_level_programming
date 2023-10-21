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
	unsigned long k;

	i = 1;
	j = 2;
	s = 0;
	k = i + j;
	while (s < 4000000)
	{
		s = i + j;
		if (s % 2 == 0)
		{
			/*if (k != 50)
			{*/
			k = k + s;
			/*}
			else
			{
				printf("%lu", s);
			}*/
		}

		i = j;
		j = s;
	}
	printf("%lu\n", k);
	return (0);
}
