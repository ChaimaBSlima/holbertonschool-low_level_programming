#include "hash_tables.h"
/**
 * hash_table_create - a function that creates
 *  a hash table.
 * @size: size of array
 *
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *the_hash_table = NULL;
	hash_node_t **temp = NULL;

	temp = calloc(size, sizeof(char *));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	the_hash_table = calloc(1, sizeof(hash_table_t));
	if (the_hash_table == NULL)
	{
		return (NULL);
	}
	the_hash_table->size = size;
	the_hash_table->array = temp;
	return (the_hash_table);
}
