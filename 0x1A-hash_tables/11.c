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
	shash_node_t *s_list = NULL, *tmp = NULL;
	unsigned long id;

	if (ht == NULL || !key || !value)
		return (0);

	id = key_index((unsigned char *) key, ht->size);
	if (ht->array[id] != NULL)
	{
		while (ht->array[id])
		{
			if (strcmp(ht->array[id]->key, key) == 0)
                	{
                        	free(ht->array[id]->value);
	                        ht->array[id]->value = strdup(value);
				printf("Remplazo value\n\n");
        	                return (1);
               		}
			ht->array[id] = ht->array[id]->next;
		}

		if ((s_list = malloc(sizeof(shash_node_t))) == NULL)
			return (0);
		s_list->key = strdup(key);
                s_list->value = strdup(value);
		s_list->next = ht->array[id];
                s_list->sprev = NULL;
                s_list->snext = NULL;
		ht->array[id] = s_list;
		printf("no hubo llave igual, creamos nuevo nodo al comienzo de la lista\n\n");
		return (1);
	}
	printf("No hay nada en ese id\n");
	if ((s_list = malloc(sizeof(shash_node_t))) == NULL)
                        return (0);
	s_list->key = strdup(key);
	s_list->key = strdup(value);
	s_list->next = ht->array[id];
	ht->array[id] = s_list;
	printf("Node creado y enlazado al array\n");

	if (ht->shead)
	{
		printf("ya hay nodos en la lista ordenada\n");
		tmp = ht->shead;
		while (tmp)
		{
			printf("recorriendo lista ordenada\n");
			if (strcmp(s_list->key, tmp->key) <= 0)
			{
				s_list->snext = tmp;
				s_list->sprev = tmp->sprev;
				printf("hay una llave que es igual a la key  en el nodo de turno\n");
				if (tmp->sprev)
				{
					tmp->sprev->snext = s_list;
					printf("hay  un nodo antes de el tmp de turno, ste nodo ahora apunta a s_list\n\n");
				}
				else
				{
					printf("else\n");
					ht->shead = s_list;
				}
				tmp->sprev = s_list;
				break;
			}
			tmp = tmp->snext;
		}

		if (!tmp)
		{
			ht->stail->next = s_list;
			s_list->sprev = ht->stail;
			ht->stail = s_list;
		}
	}
	else
	{
		printf("shead y stail apuntant a s_list\n\n");
		ht->shead = s_list;
		ht->stail = s_list;
	} return (1);
}
