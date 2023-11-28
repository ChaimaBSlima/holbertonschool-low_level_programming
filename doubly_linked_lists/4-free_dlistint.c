#include "lists.h"
/**
 * free_dlistint-  a function that frees a dlistint_t list.
 * @head: pointer
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *chaima;

	while (head)
	{
		chaima = head;
		chaima = head->next;
		free(chaima);
	}
}
