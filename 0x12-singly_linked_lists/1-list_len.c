#include "lists.h"
#include <stddef.h>

/**
 * list_len - return the nodes of a linked list
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int tmp;

	while (h != NULL)
	{
		tmp++;
		h = h->next;
	}
	return (tmp);
}
