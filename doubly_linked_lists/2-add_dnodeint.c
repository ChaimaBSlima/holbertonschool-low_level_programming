#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at
 *  the beginning of a dlistint_t list.
 * @head: pointer
 * @n: the value of the node
 *
 * Return: new element address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		if (*head)
			(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
