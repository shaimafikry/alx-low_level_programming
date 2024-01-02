#include "hash_tables.h"
/**
 * hash_table_delete - function that free a hash table.
 * @ht: hash table
 * Return: no return
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int index;
hash_node_t *current;
hash_node_t *head;

if (ht)
{
for (index = 0; index < ht->size; index++)
{
	head = ht->array[index];
	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->key);
		free(current->value);
		free(current);
	}
}
free(ht->array);
free(ht);
}
}
