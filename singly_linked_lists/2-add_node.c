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
	int i = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	while (str[i] != '\0')
		i++;
	temp->len = i;
	temp->next = *head;
	*head = temp;
	return (temp);
}
