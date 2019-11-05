#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - print elements of a list
 * @h: linked list
 *
 * Return: count of nodes
 */
size_t print_listint(const listint_t *h)
{
	float count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
