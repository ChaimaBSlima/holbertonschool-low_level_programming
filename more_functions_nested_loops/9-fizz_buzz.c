#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz -rints the numbers from 1 to 100
 * for multiples of three print Fizz instead
 * for the multiples of five print Buzz
 * for multiples of both three and five
 * print FizzBuzz.
 * Return: void
 */
int main(void)
{
	int i;
	

	for (i = 1; i < 101; i++)
	{
		if (i % 5 == 0 && i % 3 != 0)
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
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
