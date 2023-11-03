#include "main.h"
/**
 * palindrome - checks if the string is a palindrome
 * @str: the string
 * @len: rghit letters
 * @i: left letters
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int palindrome(char *str, int len, int i)
{
	if (i >= len)
		return (1);
	if (str[len] == str[i])
		return (palindrome(str, len - 1, i + 1));
	return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i = 0;

	return (palindrome(s, len - 1, i));
}
