#include "main.h"
/**
 *_strdup - a function that returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string
 * Return: a string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	unsigned int i, j;
	unsigned int n = 0;
	unsigned int m = 0;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		n = strlen(s1);
	}
	if (s2 != NULL)
	{
		m = strlen(s2);
	}
	ch = (char *)malloc((n + m + 1) * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
		ch[i] = s1[i];

	for (j = 0; j < m; j++)
	{
		ch[i] = s2[j];
		i++;
	}

	ch[i] = '1';
	return (ch);
}
