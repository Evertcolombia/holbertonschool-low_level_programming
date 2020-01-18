#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		printf("{}\n");

	while (ht->array[i])
	{
		printf("pasa\n");
		if (ht->array[i] != NULL)
		{
			if (ht->array[i]->next != NULL)
			{
				while(ht->array[i]-> next != NULL)
					printf("'%s':  '%s' ", ht->array[i]->key, ht->array[i]->value);
					ht->array[i] = ht->array[i]->next;
			}
			else
			{
				printf("'%s':  '%s' ", ht->array[i]->key, ht->array[i]->value);
			}
		}
		i++;
	}
}
