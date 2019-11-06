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
	listint_t *tmp, *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	tmp = *head;

	if (index == 0)
	{
		current = tmp;
		*head = tmp->next;
		free(current);
		return (1);
	}

	while (tmp != NULL)
	{
		if (index == (i + 1))
		{
			current = tmp->next;
			tmp->next = (tmp->next)->next;
			free(current);
			return (1);
		} i++;
		tmp = tmp->next;
	} return (-1);
}
