#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: hhash table
 *
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flat = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	i = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (flat > 0)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				flat++;
				tmp = tmp->next;
			}
		}
		continue;
	}
	printf("}\n");
}
