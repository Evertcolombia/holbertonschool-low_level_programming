#include "hash_tables_php.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;
	/*shash_node_t **array = NULL;*/

	if (size < 1)
		return(NULL);

	if ((table = malloc(sizeof(shash_table_t ))) == NULL)
		return (NULL);

	/*if((array = calloc(size, sizeof(shash_node_t *))) == NULL)*/
        if((table->array = calloc(size, sizeof(shash_node_t *))) == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	/*table->array = array;*/
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}


int shash_table_set(shash_table_t *ht, const char *key, const char *value){
	shash_node_t *new_node = NULL;
	shash_node_t *s_list = NULL;
	unsigned long id;

	if (ht == NULL)
		return (0);


	id = key_index((unsigned char *) key, ht->size);

	if (ht->array[id] != NULL)
	{
		if (strcmp(key, ht->array[id]->key) == 0)
		{
			free(ht->array[id]->value);
			ht->array[id]->value = strdup(value);
			return (1);
		}
	}
		
	if ((new_node = malloc(sizeof(shash_node_t *))) == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[id];
	ht->array[id] = new_node;

	if ((s_list = malloc(sizeof(shash_node_t *))) == NULL)
                return (0)
	s_list->key = strdup(key);
	s_list->value = strdup(value);
	s_list->sprev = NULL;
	s_list->snext = NULL;
	
	th->shead = s_list;
	th->stail = s_list;

	return (1);
}
