#include "hash_tables.h"
/**
 * hash_table_create - creats and alloct memory for a table
 * @size:  size of a table
 * Return: pointer to a newly created tble
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
