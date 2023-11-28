#include "lists.h"
/**
 * free_dlistint-  a function that frees a dlistint_t list.
 * @head: pointer
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *chaima = head;

	while (head)
	{
		chaima = head->next;
		free(chaima);
		chaima = head;
	}
}
