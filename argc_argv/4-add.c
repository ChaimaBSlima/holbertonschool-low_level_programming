#include <stdio.h>
#include <stdlib.h>

int checknumbers(int argc, char **argv)
{
	int i;

	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] < 47) || (*argv[i] > 58))
		{
			return (0);
		}
	}
	return (1);
}
/**
 * main - Entry point
 * @argc : size of the array
 * @argv : elements of the array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (checknumbers(argc, argv) == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
