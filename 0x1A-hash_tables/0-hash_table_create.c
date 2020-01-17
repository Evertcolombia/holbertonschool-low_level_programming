#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash tabble
 * @size: size of the array table
 *
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t  *table = NULL;

	table = malloc(size * sizeof(table));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t));
	if (table->array == NULL)
		return (NULL);

	return (table);
}
