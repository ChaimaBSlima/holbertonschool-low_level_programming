#include "lists.h"
/**
 * delete_dnodeint_at_index -  a function that deletes the node at
 *  index index of a dlistint_t linked list.
 * @head: pointer
 * @index: giving position
 *
 * Return: 1 if succeeded or -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *chaima = *head;

	if (!head)
		return (-1);
	if (head)
	{
		while (index && chaima)
		{
			chaima = chaima->next;
			index--;
		}
		if (index)
			return (-1);
		if (!index && chaima)
		{
			if (chaima->next)
				chaima->next->prev = chaima->prev;
			if (chaima->prev)
				chaima->prev->next = chaima->next;
			else
				*head = chaima->next;
			free(chaima);
			return (1);
		}
	}
	return (-1);
}
