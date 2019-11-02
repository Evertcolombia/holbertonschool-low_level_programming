#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print a linked list
 * @h:	linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int tmp;

	while (h != NULL)
	{

		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next, tmp++;
	}
	return (tmp);
}
