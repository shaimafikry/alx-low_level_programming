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
	hash_node_t *head;
	unsigned int index;

	/*handling error*/
	if (ht == NULL || value == NULL)
		return (0);
	/*memroy allocation*/
	item = malloc (sizeof(hash_node_t));
	item->key = malloc (strlen(key)+ 1);
	item->value = malloc(strlen(value) + 1);
	if (!item->key || !item->value)
		return (0);
	table = ht;
	item->key =  key;
	item->value = strdup(value);/*duplicate the value*/
	index = key_index(key, table->size);

	head = table->array[index];/*to check if the index is empty*/
	if (head == NULL)
			table->array[index] = item;
	else
	{
		item->next = head;
		head = item;
		table->array[index] = item;
	}
	return (1);
}
