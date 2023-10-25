#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - a function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: the string
 * @src: the string
 * Return: string value
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest,src));
}