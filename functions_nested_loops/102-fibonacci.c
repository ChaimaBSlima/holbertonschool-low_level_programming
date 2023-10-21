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
	int k;

	i = 1;
	j = 2;
	s = 0;
	k = 3;
	printf("%lu, ", i);
	printf("%lu, ", j);
	while (k < 51)
	{
		s = i + j;
		if (k != 50)
		{
			printf("%lu, ", s);
		}
		else
		{
			printf("%lu", s);
		}
		i = j;
		j = s;
		k++;
	}
	printf("\n");
	return (0);
}
