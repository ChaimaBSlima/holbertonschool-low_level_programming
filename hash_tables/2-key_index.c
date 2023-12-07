#include "hash_tables.h"
/**
 * key_index - a function that gives
 * you the index of a key.
 * @key: key value
 * @size:  size of array of the hash table
 *
 * Return: unsigned long int index value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
