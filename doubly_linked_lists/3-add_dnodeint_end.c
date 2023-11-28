#include "lists.h"
/**
 * add_dnodeint_end -  a function that adds a new node
 *  at the end of a dlistint_t list.
 * @head: pointer
 * @n: the value of the node
 *
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp && temp->next)
			temp = temp->next;
		temp->next = new_node;
		new->prev = temp;
	}
	return (new_node);
}
