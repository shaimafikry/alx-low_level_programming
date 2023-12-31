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
	hash_table_t *table;
	hash_node_t *item;
	hash_node_t *new;
	unsigned int index;
	unsigned int i ;

	/*handling error*/
	if (ht == NULL || value == NULL)
		return (0);
	/*memroy allocation*/
	item->key = malloc (strlen(key));
	item->value = malloc(strlen(value));
	if (!item->key || !item->value)
		return (0);
	table = ht;
	new = item;
	strdup(value,item->value);/*duplicate the value*/
	index = key_index(key, table->size);
	for (i = 0; i < table->size; i++)
	{
		if (i == index)
		{
			new->next = item;
			item = new;
			table->array[i] = item;
		}
		else
			table->array[i] = item;
	}

	return (1);
}
