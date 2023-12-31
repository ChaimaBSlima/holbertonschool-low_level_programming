#include "main.h"
/**
 * binary_to_uint -a function that converts a binary number
 *  to an unsigned int.
 * @b: binary number
 *
 * Return: unsigned int decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;
	int len;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	len = strlen(b);
	if (b[i] != '0' && b[i] != '1' && i != len)
	{
		return (0);
	}
	return (val);
}
