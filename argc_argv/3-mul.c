#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc : size of the array
 * @argv : elements of the array
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
