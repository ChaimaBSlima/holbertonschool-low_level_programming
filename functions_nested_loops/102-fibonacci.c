#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned i;
	unsigned j;
	unsigned s;
	int k;

	i = 1;
	j = 2;
	s = 0;
	k = 3;
	printf("%u, ", i);
	printf("%u, ", j);
	while (k < 51)
	{
		s = i + j;
		if (k != 50)
		{
			printf("%u, ", s);
		}
		else
		{
			printf("%u", s);
		}
		i = j;
		j = s;
		k++;
	}
	printf("\n");
	return (0);
}
