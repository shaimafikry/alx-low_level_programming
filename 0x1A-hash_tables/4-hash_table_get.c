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
char *value;

/*handling error*/
if (ht == NULL || key == NULL)
	return (NULL);
/*memroy allocation*/
index = key_index((const unsigned char *)key, ht->size);
if (!ht->array[index])
	return (NULL);
value = malloc(sizeof(ht->array[index]->value));
	if (!value)
		return (NULL);
value = ht->array[index]->value;
return (value);
}
