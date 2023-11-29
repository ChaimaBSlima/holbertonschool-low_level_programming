#include "lists.h"
/**
 * sum_dlistint -a function that returns the sum of all
 *  the data (n) of a dlistint_t linked list.
 * @head: pointer
 *
 * Return: sum value
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *chaima = head;

	while (chaima)
	{
		sum += chaima->n;
		chaima = chaima->next;
	}
	return (sum);
}
