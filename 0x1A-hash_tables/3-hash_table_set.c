#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success 0 if not
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *item;
unsigned int index;

/*handling error*/
if (ht == NULL || value == NULL)
	return (0);
/*memroy allocation*/
item = malloc(sizeof(hash_node_t));
item->key = malloc(strlen(key) + 1);
item->value = malloc(strlen(value) + 1);
if (!item->key || !item->value)
	return (0);
item->key = strdup(key);
item->value = strdup(value);/*duplicate the value*/
item->next = NULL;
index = key_index((const unsigned char *)key, ht->size);

if (item->key == ht->array[index]->key)
	{
		ht->array[index]->value = malloc(strlen(value) + 1);
		ht->array[index]->value = strdup(value);
		return (1);

	}
else
	{
		item->next = ht->array[index];
		ht->array[index] = item;
	}
return (1);
}
