#include "lists.h"

/**
 * listint_len - calculate the len oh a list
 * @h: linked list
 *
 * Return: node counter
 */
size_t listint_len(const listint_t *h)
{
	float count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	} return (count);
}
