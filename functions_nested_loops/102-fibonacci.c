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
	k = 3;
	printf("%d, ", i);
	printf("%d, ", j);
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
        i = j;
		j = s;
		k++;
	}
	printf("%d", j);
	printf("\n");
	return (0);
}
