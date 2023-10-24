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
	int k;
	char str1;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;
	while (k < i / 2)
	{
		str1 = s[k];
		s[k] = s[j];
		s[j--] = str1;
		k++;
		j--;
	}
}