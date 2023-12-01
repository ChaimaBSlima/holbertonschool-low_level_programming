#include "main.h"
/**
 * get_bit -a function that returns
 * the value of a bit at a given index.
 * @n: the number
 * @index: the given index
 *
 * Return: int value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	int *array;
	int bytes = 0;
	int the_number;
	unsigned int el3adad = n;
	unsigned int num = el3adad;

	while (el3adad / 2 != 0)
	{
		el3adad /= 2;
		bytes++;
	}
	bytes++;
	array = malloc(bytes * sizeof(int));
	for (i = 0; i < bytes; i++)
	{
		array[i] = num % 2;
		num /= 2;
	}
	if (index > bytes)
	{
		the_number = -1;
	}
	else
	{
		the_number = array[index];
	}
	free(array);
	return (the_number);
}
