#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to the first node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *chaima;

	while (head)
	{
		chaima = head->next;
		free(head->str);
		free(head);
		head = chaima;
	}
}
