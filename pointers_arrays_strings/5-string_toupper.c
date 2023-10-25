#include "main.h"
#include <stdio.h>
/**
 *  print_rev - prints a string,
 *  in reverse, followed by a new line.
 * @s: the string of address s
 * Return: void
 */
char *string_toupper(char *s)
{
	char Upp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	 char Low[26] = "abcdefghijklmnopqrstuvwxyz";
	  int i;
	int j;
	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (Low[j] != '\0' || Low(j) != s[i])
		{
			j++;
		}
		s[i] = Upp[j];
	}
	return (s);
}
