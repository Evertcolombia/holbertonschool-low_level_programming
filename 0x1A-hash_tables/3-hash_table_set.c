#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;

	if (ht == NULL)
		return (0);

	/*if (key == NULL)
		return(0);*/

	/*if (value == NULL)
		return (0);*/

	index =  key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return(0);
	new_node->key = strdup(key); 
        new_node->value = strdup(value);
		
	if (ht->array[index] == 0)
	{
		/*printf("No hay collision\n");*/
		new_node->next = ht->array[index];
                /*printf("new node apunta a head \n");*/
		ht->array[index] = new_node;
		/*printf("head apunta a new node \n");*/
		return (1); /*falta algo en return*/
	}
	else
	{
		/*printf("Hubo una collision \n");*/
		/*printf("anterior nodo en next ahora solo apunta a null\n");*/
		new_node->next = ht->array[index];
		/*printf("new node apunta a header \n");*/
		ht->array[index] = new_node;
		/*printf("HEADER APUNTA A  new node\n");*/
		return (1);
	}
	return (0);
}
