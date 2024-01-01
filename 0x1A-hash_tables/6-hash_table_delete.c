#include "hash_tables.h"
/**
 * hash_table_delete - function that retrieves a value associated with a key.
 * @ht: hash table
 * Return: no return
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned int index;
hash_node_t *current;
hash_node_t *head;


/*handling error*/
if (ht == NULL)
	return;
for (index = 0; index < ht->size; index++)
{
	head = ht->array[index];
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
	free(ht->array[index]);
}
free(ht);
}
