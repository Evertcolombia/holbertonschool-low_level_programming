#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value in a specific key
 * @ht: hash table
 * @key: key to hashing
 *
 * Return: value on success null on fail
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	while (ht->array[index])
	{
		if (strcmp(key, ht->array[index]->key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;	
	} return (NULL);
}
