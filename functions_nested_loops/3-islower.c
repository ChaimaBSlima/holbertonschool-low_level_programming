#include "main.h"
/**
 * int _islower-checks for lowercase character.
 * Description:Returns 1 if c is lowercase
 * Returns 0 otherwise
 * @c:The code ASCII of the charcter
 * Return: 0 or 1
 */
int _islower(int c)
{
    if (97 <= c <= 122)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
