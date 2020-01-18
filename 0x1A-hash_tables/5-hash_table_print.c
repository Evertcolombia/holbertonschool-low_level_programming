#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		printf("{}\n");

	printf("{");
	while (i <= ht->size)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			if (tmp->next != NULL)
				printf("'%s': '%s', ", tmp->next->key, tmp->next->value);
			else
				printf("'%s':  '%s' ", tmp->key, tmp->value);
		} i++;
	} printf("}\n");
}

