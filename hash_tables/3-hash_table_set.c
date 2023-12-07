#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 * @ht: pointer to first case of table
 * @key: key value
 * @value: value of key element
 *
 * Return: 1 for success or 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr = NULL;
	hash_node_t *node = NULL;
	unsigned long int i;

	if (!ht || !key)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[i];

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			return (1);
		}
		ptr = ptr->next;
	}


	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
