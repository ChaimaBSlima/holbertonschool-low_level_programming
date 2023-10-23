#include "main.h"
#include <stdio.h>
/**
 *  print_rev - prints a string,
 *  in reverse, followed by a new line.
 * @s: the string of address s
 * Return: void
 */
void rev_string(char *s)
{
	int j;
	int i;
    char str1;
    
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		str1=s[j];
		j--;
	}
	*s = str1 ;
}