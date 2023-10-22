#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
unsigned long bigPrimeFactor(unsigned long n)
{
	unsigned long i;
	unsigned long mac;

	mac = -1;
	while (n % 2 == 0)
	{
		mac = 2;
		while (n % 2 == 0)
		{
			n = n / 2;
		}
	}

	for (i = 3; i * i < n + 1; i = i + 2)
	{
		while (n % i == 0)
		{
			mac = i;
			n = n / i;
		}
	}
	if (n > 2)
		mac = i;
	return (mac);
}
int main(void)
{
	unsigned long n;
	unsigned long mac;

	n = 612852475143;
	mac = bigPrimeFactor(n);
	printf("%lu\n", mac);
	return 0;
}
