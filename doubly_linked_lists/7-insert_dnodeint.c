#include "lists.h"
/**
 * insert_dnodeint_at_index -  a function that inserts a new
 *  node at a given position.
 * @h: pointer
 * @idx: giving position
 * @n: value of the new node named chaima  :)
 *
 * Return: adress of chaima ;-)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *chaima, *current_node;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current_node = *h;
	while (idx > 1 && current_node && current_node->next)
	{
		current_node = current_node->next;
		idx--;
	}
	chaima = malloc(sizeof(dlistint_t));
	if (chaima == NULL)
		return (NULL);
	if (idx > 1 || current_node == NULL)
		return (NULL);
	chaima->n = n;
	if (current_node->next != NULL)
		current_node->next->prev = chaima;
	chaima->prev = current_node;
	chaima->next = current_node->next;
	current_node->next = chaima;
	return (chaima);
}
