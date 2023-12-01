#include "main.h"
/**
 * clear_bit - a function that sets
 * the value of a bit to 0 at a given index..
 * @n: the number
 * @index: the given index
 *
 * Return: int value
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);

	*n = *n & (~(1 << index));
	return (1);

}
