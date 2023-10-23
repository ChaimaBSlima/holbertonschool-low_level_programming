#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: the string of address s
 * Return: int value
 */
int _strlen(char *s)
{
	int i;
	for (i = 0; *(s + i) != '\0'; ++i);
	return (i);
}
