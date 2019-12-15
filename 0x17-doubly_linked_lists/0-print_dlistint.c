#include "lists.h"
/**
 * print_dlistint - print element in a dlist
 * @h : Header of the list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", tmp->n);
		count++;
		h = h->next;
	} return (count);
}
