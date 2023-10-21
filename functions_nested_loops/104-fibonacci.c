#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long long i;
	unsigned long long j;
	unsigned long long s;
	int k;

	i = 1;
	j = 2;
	s = 0;
	k = 3;
	printf("%llu, ", i);
	printf("%llu, ", j);
	while (k < 99)
	{
		s = i + j;
		if (k != 98)
		{
			printf("%llu, ", s);
		}
		else
		{
			printf("%llu", s);
		}
		i = j;
		j = s;
		k++;
	}
	printf("\n");
	return (0);
}
