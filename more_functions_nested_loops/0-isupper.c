#include "main.h"
/**
 * _isupper -checks for  uppercase character.
 * Description:Returns 1 if c is uppercase
 * Returns 0 otherwise
 * @c:The code ASCII of the charcter
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
