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
	int s;
	int k;

	i = 1;
	j = 2;
	s = 0;
	k = 1;
	while (k < 51)
	{
		s = i + j;
		if (k != 50)
		{
			printf("%d, ", s);
		}
		else
		{
			printf("%d", s);
		}

		j = s;
		i = j;
		k++;
	}
	printf("%d", j);
	printf("\n");
	return (0);
}
