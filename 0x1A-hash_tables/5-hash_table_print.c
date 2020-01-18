#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned  int i, state = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		for (tmp = ht->array[i]; tmp != NULL; tmp = tmp->next)
		{
			if (state > 0)
				printf(", ");
			printf("'%s': '%s', ", tmp->key, tmp->value);
			state++;
		}
	}
	printf("}\n");
}

