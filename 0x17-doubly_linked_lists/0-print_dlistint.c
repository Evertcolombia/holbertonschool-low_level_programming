#include "lists.h"
/**
 * print_dlistint - print element in a dlist
 * @h : Header of the list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	if (h ==  NULL)
		return (-1);

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	} return (count);
}
