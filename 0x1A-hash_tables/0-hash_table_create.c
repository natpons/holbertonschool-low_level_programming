#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;

	if (size == 0)
		return (NULL);

	newtable = malloc(sizeof(hash_table_t));

	if (newtable == 0)
		return (NULL);

	newtable->size = size;
	newtable->array = calloc(size, sizeof(hash_node_t *));

	if (newtable->array == 0)
		return (NULL);

	return (newtable);
}
