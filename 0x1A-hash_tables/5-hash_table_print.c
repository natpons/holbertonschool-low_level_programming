#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * print the key/value in the order they appear in the array of hash table
 * if ht is NULL, don't print anything
 * @ht: is the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != 0)
		{
			printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
		}
	}
	printf("\n");
}
