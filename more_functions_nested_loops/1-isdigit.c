#include "main.h"
/**
 * _isdigit -checks for a digit (0 through 9)..
 * Description:Returns 1 if c is digit
 * Returns 0 otherwise
 * @c:The code ASCII of the charcter
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
	{
	return (1);
	}
	else
	{
		return (0);
	}
}
