#include "lists.h"

/**
 * sum_dlistint - sum all the data to a dlinked l
 * @head: head of the list
 *
 * Return: sum total on success
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int total = 0;

	if (head == NULL)
		return (-1);
	tmp = head;

	if (tmp->prev == NULL && tmp->next == NULL)
	{
		total += tmp->n;
		return (total);
	}
	else
	{
		while (tmp != NULL)
		{
			total += tmp->n;
			tmp = tmp->next;
		}
	} return (total);
}
