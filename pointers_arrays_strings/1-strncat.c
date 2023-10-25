#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strncat - a function that concatenates two strings.
 * @dest: the string
 * @src: the string
 * @n: int byte
 * Return: string value
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0, j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && j < n)
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    return (dest);
}
