#include "lists.h"
/**
 * print_list -   a function that returns the number 
 * of elements in a linked list_t list.
 * @h: pointer to the first node
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
