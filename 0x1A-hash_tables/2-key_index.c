#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: the key of hash table
 * @size: hash table size
 * Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, i;

	i = hash_djb2(key);
	index = i % size;

	return (index);
}
