#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table you want to look to
 * @key: is the key you are looking for
 * Return: the value associated with the element,
 * or NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *key_copystr;
	unsigned int i;
	hash_node_t *temp;

	if (ht == NULL)
		return (NULL);

	key_copystr = strdup(key);
	i = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[i];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			break;
		}
		temp = temp->next;
	}

	free(key_copystr);

	if (temp == NULL)
		return (NULL);

	return (temp->value);
}
