#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key, cannot be an empty string
 * @value: is the value associated with the key,
 * must be duplicated, can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *temp;
	unsigned int i;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

/*to find an empty cell*/
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)

	node->key = strdup(key);
	node->value = strdup(value);

	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
