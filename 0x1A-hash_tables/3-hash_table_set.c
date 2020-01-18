#include "hash_tables.h"

/**
 * hash_table_set - set node in table hash
 * @ht: hash table
 * @key: jey to get index
 * @value: to set in the node
 *
 * Return: 1 on success 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;

	if (ht == NULL)
		return (0);

	index =  key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[index] == 0)
	{

		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	else
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			return (1);
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
	return (0);
}
