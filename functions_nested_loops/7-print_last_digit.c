#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number.
 * @c:The number
 * Return: int value 
 */
int print_last_digit(int c)
{
	if (c > 0)
	{
		return (c % 10);
	}
	else
	{
		return (-c % 10);
	}
}
