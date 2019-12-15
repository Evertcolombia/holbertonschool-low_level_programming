#include "lists.h"
/**
 * dlistint_len - counts elements in a list
 * @h: list
 *
 * Return: count of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	tmp = h;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	} return (count);
}
