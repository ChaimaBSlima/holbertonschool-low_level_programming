#include "lists.h"
/**
 * add_node_end - a function that adds a new node at
 * the end of a list_t list.
 * @head: pointer to the first node
 * @str: string pointer
 * Return: adress of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *check_head = *head;

	if (!head || !new_node)
	{
		return (NULL);
	}
	if (str)
	{
		new_node->str = strdup(str);
		if (!new_node->str)
		{
			free(new_node);
			return (NULL);
		}
		new_node->len = strlen(new_node->str);
	}
	if (check_head){
		while (node->next)
		{
			node = node->next;
		}
		node->next = new_node;
	}else {
		*head= new_node;
	}
	return (new_node);
}
