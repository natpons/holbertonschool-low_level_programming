#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key
 * @key: a key
 * @size: is the size of the hash table
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
