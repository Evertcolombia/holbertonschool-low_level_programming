#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node given by a key
 * @head: double pointer
 * @index: value
 *
 * Return: 1 on success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current, *h;
	unsigned int i = 1;

	if (head == NULL)
		return (-1);

	tmp = *head, h = *head;

	if (i == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (tmp !=  NULL)
	{
		if (i == (index - 1))
		{
			current = tmp;
		}

		if (i == index)
		{
			h  = tmp->next;
			free(tmp);
			current->next = h;
			return (1);
		} i++;
		tmp = tmp->next;
	} return (-1);
}
