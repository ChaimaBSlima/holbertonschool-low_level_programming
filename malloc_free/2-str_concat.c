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
	int n;
	int m;

	if (s1 == NULL)
	{
		return (NULL);
	}
	n = strlen(s1);
	m = strlen(s2);
	ch = (char *)malloc((n + m + 1) * sizeof(char));
	if (ch != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ch[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++)
			ch[i] = s2[j];
			i++;
	}
	else
	{
		return (NULL);
	}
	ch[i] = '\0';
	return (ch);
}
