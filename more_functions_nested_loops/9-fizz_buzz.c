#include <stdio.h>
/**
 * main -prints the numbers from 1 to 100
 * for multiples of three print Fizz instead
 * for the multiples of five print Buzz
 * for multiples of both three and five
 * print FizzBuzz.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 5 == 0 && i % 3 != 0 && i != 100)
		{
			printf("Buzz ");
		}
		else if (i % 5 != 0 && i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
