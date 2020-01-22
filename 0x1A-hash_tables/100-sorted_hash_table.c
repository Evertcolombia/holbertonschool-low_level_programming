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
