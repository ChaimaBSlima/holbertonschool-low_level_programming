#include "lists.h"
/**
 * dlistint_len -a function that returns the number
 *  of elements in a linked dlistint_t list.
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
