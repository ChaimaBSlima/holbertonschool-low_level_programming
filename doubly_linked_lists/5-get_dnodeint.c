#include "lists.h"
/**
 * get_dnodeint_at_index -a function that returns the nth node of
 * a dlistint_t linked list.
 * @head: pointer
 * @index: the n node
 * Return: n node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index != 0)
	{
		head = head->next;
		index--;
	}
	if (head && index == 0)
		return (head);
	return (NULL);
}
