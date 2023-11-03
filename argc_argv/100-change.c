#include <stdio.h>
#include <stdlib.h>
/**
 * calcul - find the number of cents
 * @sum : the number of cents
 * @cent : the money
 * Return: int value
 */
int calcul(int sum, int cent)
{
	while (cent != 0)
	{
		if (cent >= 25)
		{
			sum += 1;
			cent = cent - 25;
		}
		else if (cent >= 10)
		{
			sum += 1;
			cent = cent - 10;
		}
		else if (cent >= 5)
		{
			sum += 1;
			cent = cent - 5;
		}
		else if (cent >= 2)
		{
			sum += 1;
			cent = cent - 2;
		}
		else if (cent >= 1)
		{
			sum += 1;
			cent = cent - 1;
		}
	}
	return (sum);
}
/**
 * main - Entry point
 * @argc : size of the array
 * @argv : elements of the array
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{

	int sum = 0;
	int cent = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (cent < 0)
	{
		sum = 0;
	}
	else
	{
		sum = calcul(sum, cent);
	}
	printf("%d\n", sum);
	return (0);
}
