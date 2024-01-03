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
hash_node_t *current;
unsigned int index;

/*handling error*/
if (ht == NULL || value == NULL)
	return (0);
/*memroy allocation*/
item = malloc(sizeof(hash_node_t));
item->key = strdup(key);
item->value = strdup(value);/*duplicate the value*/
item->next = NULL;
index = key_index((const unsigned char *)key, ht->size);

current = ht->array[index];
if (current != NULL)
{
	if (strcmp(item->key, current->key) == 0)
	{
		current->value = realloc(current->value, strlen(value) + 1);
		current->value = strdup(value);
		return (1);
	}
}
item->next = ht->array[index];
ht->array[index] = item;
return (1);
}
