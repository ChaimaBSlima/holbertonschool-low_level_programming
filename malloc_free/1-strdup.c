#include "main.h"
/**
 *_strdup - a function that returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string
 * Return: a string.
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i;
	int n;

	if (str == NULL)
	{
		return (NULL);
	}
	n = strlen(str);
	ch = (char *)malloc(n + 1 * sizeof(char));
	if (ch != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			ch[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	ch[i] = '\0';
	return (ch);
}
