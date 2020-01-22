#include "hash_tables_php.h"

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;
	shash_node_s *new_node = NULL;

	if (size < 1)
		return(NULL);

	table = malloc(sizeof(shash_table_t ));
	if (table == NULL)
		return (NULL);

	table->array = calloc(size, sizeof(shash_node_s *));
	if (new_node == NULL)
		return (NULL);

	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
}
