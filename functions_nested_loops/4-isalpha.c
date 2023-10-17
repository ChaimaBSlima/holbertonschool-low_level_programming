#include "main.h"
/**
 * _isalpha -checks for alphabetic character..
 * Description:Returns 1 if c is a letter, lowercase or uppercase.
 * Returns 0 otherwise
 * @c:The code ASCII of the charcter
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
