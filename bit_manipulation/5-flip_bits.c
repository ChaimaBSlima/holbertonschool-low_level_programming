#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another..
 * @n: the number
 * @m: the second number
 *
 * Return: int value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int i = 0;

	num = n ^ m;

	while (num != 0)
	{
		if ((num & 1) == 1)
			i++;
		num = num >> 1;
	}
	return (i);
}
