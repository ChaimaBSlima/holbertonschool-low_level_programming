#include "main.h"
/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n : limits of s2
 * Return: a string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int i, j;
	unsigned int n1 = 0;
	unsigned int n2 = 0;

	if (s1 != NULL)
	{
		n1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		n2 = strlen(s2);
	}
	if (n >= n2)
	{
		n = n2;
	}

	ch = malloc((n1 + n + 1) * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n1; i++)
		ch[i] = s1[i];
	if (s2 != NULL)
	{
		for (j = 0; j < n; j++)
		{
			ch[i] = s2[j];
			i++;
		}
	}
	ch[i] = '\0';
	return (ch);
}
