#include "main.h"
/**
 * _islower -checks for lowercase character.
 * Description:Returns 1 if c is lowercase
 * Returns 0 otherwise
 * @c:The code ASCII of the charcter
 * Return: 0 or 1
 */
int _islower(int c)
{
	if ((96 > c) && (c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
