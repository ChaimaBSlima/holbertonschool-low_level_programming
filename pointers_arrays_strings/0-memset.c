#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcat - a function that concatenates two strings.
 * @dest: the string
 * @src: the string
 * Return: string value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;


	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
