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
	int i, len, temp;  

    len = strlen(s); 
    for (i = 0; i < len/2; i++)  
    {   
        temp = str1[i];  
        str1[i] = str1[len - i - 1];  
        str1[len - i - 1] = temp;  
    }  
}