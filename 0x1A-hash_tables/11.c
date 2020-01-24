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


int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long id;
	/*shash_node_t *s_list = NULL, *tmp = NULL*/;

	if (ht == NULL || !key)
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
        	                return (1);
               		}
			ht->array[id] = ht->array[id]->next;
		}

		/*
		if ((s_list = malloc(sizeof(shash_node_t))) == NULL)
			return (0);
		s_list->key = strdup(key);
                s_list->value = strdup(value);
		s_list->next = ht->array[id];
                s_list->sprev = NULL;
                s_list->snext = NULL;
		ht->array[id] = s_list;
		return (1);*/

		if (set_new_index(ht, key, value, id) == 0)
                	return (0);
        	else
                	return (1);

	}

	if (set_new_index(ht, key, value, id) == 0)
		return (0);
	else
		return (1);
}


char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp = NULL;
	unsigned long id;

	if (ht == NULL || !key)
                return (0);

	id = key_index((unsigned char *) key, ht->size);

	if (ht->array[id] != NULL)
	{
		tmp = ht->array[id];
		while (tmp)
		{
			if (strcmp(key, tmp->key) == 0)
				return (strdup(tmp->value));
			tmp = tmp->next;
		}
	} return (NULL);
}


void shash_table_print(const shash_table_t *ht)
{
	int flat = 0;
	shash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	if (ht->shead)
	{
		tmp = ht->shead;

		printf("{");
		while (tmp)
		{
			if (flat > 0)
				printf(", ");
			printf("'%s' : '%s'", tmp->key, tmp->value);
			flat++;
			tmp = tmp->snext;
		}
		printf("}\n");
	}
}


void shash_table_print_rev(const shash_table_t *ht)
{
	int flat = 0;
	shash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	if (ht->stail)
	{
		tmp = ht->stail;

		printf("{");
		while (tmp->sprev != NULL)
		{
			if (flat > 0)
				printf(",");
			printf("'%s' : '%s'", tmp->key, tmp->value);
			flat++;
			tmp = tmp->sprev;
		}
		printf(", '%s' : '%s'", tmp->key, tmp->value);
		printf("}\n");
	}

}

int set_new_index(shash_table_t *ht, const char *key, const char *value, unsigned long id)
{
	shash_node_t *tmp = NULL, *s_list = NULL;

	if(ht == NULL || !key)
		return (0);

	
	if ((s_list = malloc(sizeof(shash_node_t))) == NULL)
                        return (0);

	s_list->key = strdup(key);
	s_list->value = strdup(value);
	s_list->next = ht->array[id];
	ht->array[id] = s_list;

	if (ht->shead == NULL)
        {
                ht->shead = s_list;
                ht->stail = s_list;
        }
	else
	{
		tmp = ht->shead;

		/*if (tmp == NULL)
                {
			ht->stail->next = s_list;
			s_list->sprev = ht->stail;
			ht->stail = s_list;
		}*/

		while (tmp)
		{
			if (strcmp(s_list->key, tmp->key) <= 0)
			{
				s_list->snext = tmp;
				s_list->sprev = tmp->sprev;
				if (tmp->sprev == NULL)
				{
					ht->shead = s_list;
				}
				else
				{
					tmp->sprev->snext = s_list;
				}
				tmp->sprev = s_list;
				break;
			}
			tmp = tmp->snext;
		}
	}
	return (1);
}
