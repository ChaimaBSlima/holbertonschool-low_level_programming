#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array  a function that reverses the content of
 * an array of integers.
 * @a: the array
 * @n: number of elements of the array
 * Return: int value
 */
void reverse_array(int *a, int n)
{
    int i;
    i = n - 1;
    while (i > -1)
    {
        if (i == 0)
        {
            printf("%d", a[i]);
        }
        else
        {
            printf("%d, ", a[i]);
        }
        i--;
    }
}