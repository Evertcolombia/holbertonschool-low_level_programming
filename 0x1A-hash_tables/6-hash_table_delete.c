#include "hash_tables.h"
/**
 * hash_table_delete - delte a hash table
 * @ht: hash table
 *
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *tmp = NULL, *tmp_del = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];

			while (tmp != NULL)
			{
				tmp_del = tmp;
				tmp = tmp->next;
				free(tmp_del->key);
				free(tmp_del->value);
				free(tmp_del);
			}
		}
	}
	free(ht->array);
	free(ht);
}
