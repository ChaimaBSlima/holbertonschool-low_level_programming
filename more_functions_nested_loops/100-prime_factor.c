#include <stdio.h>
#include <math.h>
/**
 * bigPrimeFactor - find the max big factor
 * of a number
 * @n: the number 
 * Return: long int value
 */
unsigned long bigPrimeFactor(unsigned long n)
{
	unsigned long i;
	unsigned long mac;

	mac = -1;
	if (n % 2 == 0)
	{ 
		mac = 2;
		while (n % 2 == 0)
		{
			n = n / 2;
		}
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			mac = i;
			n = n / i;
		}
	}
	if (n > 2)
		mac = n;
	return (mac);
}
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long n;
	unsigned long mac;

	n = 612852475143;
	mac = bigPrimeFactor(n);
	printf("%lu\n", mac);
	return 0;
}
