#include "main.h"
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: the element of the array
 * Return: the array.
 */
char *_strdup(char *str)
{
	char *ch;
	unsigned int i;
	int n;

	n = strlen(str);
	ch = (char *)malloc(n + 1 * sizeof(char));
	if (*str == NULL)
	{
		return (NULL);
	}
	else
	{
		if (ch != NULL)
		{
			for (i = 0; str[i] != '\0'; i++)
				ch[i] = str[i];
		}
		else
		{
			return (NULL);
		}
	}
	ch[i] = '\0';
	return (ch);
}
