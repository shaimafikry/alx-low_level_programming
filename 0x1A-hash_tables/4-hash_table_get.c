#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 * Return: 1 on success 0 if not
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned int index;
hash_node_t *current;

/*handling error*/
if (ht == NULL || key == NULL)
	return (NULL);
index = key_index((const unsigned char *)key, ht->size);
if (!ht->array[index])
	return (NULL);
current = ht->array[index];
while (current != NULL)
{
	if (strcmp(key, current->key) == 0)
	{
		return (current->value);
	}
	current = current->next;

}
return (NULL);
}
