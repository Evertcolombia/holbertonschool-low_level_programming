#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return a node calll by an index
 * @head: linked list
 * @index: value
 *
 * Return: node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	while (tmp != NULL)
	{
		if (i == index)
		{
			return (tmp);
		} i++;
		tmp = tmp->next;
	}
	return (NULL);
}
