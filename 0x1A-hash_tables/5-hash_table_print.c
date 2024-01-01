#include "hash_tables.h"
/**
 * hash_table_print - function that retrieves a value associated with a key.
 * @ht: hash table
 * Return: no return
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned int index;
hash_node_t *current;
int n = 0;

/*handling error*/
if (ht == NULL)
	return;
printf("{");
for (index = 0; index < ht->size; index++)
{
	current = ht->array[index];
	while (current != NULL)
	{
		if (n == 0)
		{
			printf("'%s': '%s'", current->key, current->value);
			n = 1;
		}
		else
			printf(", '%s': '%s'", current->key, current->value);
		current = current->next;
	}
}
	printf("}");
printf("\n");
}
