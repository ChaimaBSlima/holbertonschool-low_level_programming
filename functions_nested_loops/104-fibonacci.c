#include <stdio.h>
#define large 10000000000
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
	int m, n;
	int k;

	i = 1;
	j = 2;
	s = 0;
	k = 3;
	printf("%lu, ", i);
	printf("%lu, ", j);
	while (k < 99)
	{
		s = i + j;
		if (s > large)
		{
			m = s % large;
			n = s / large;
			if (k != 98)

			{
				printf("%lu%u, ",n,m);
			}
			else
			{
				printf("%lu%u",n,m);
			}
		}else{
				printf("%lu, ", s);
		}
		i = j;
		j = s;
		k++;
	}
	printf("\n");
	return (0);
}
