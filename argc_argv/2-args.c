#include <stdio.h>
/**
 * main - Entry point
 * @argc : size of the array
 * @argv : elements of the array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
