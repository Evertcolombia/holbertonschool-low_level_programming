#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node in a given key
 * @head: double pointer
 * @idx: value index
 * @n: value
 *
 * Return: node or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node, *current;
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	tmp = *head, current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (tmp != NULL)
	{
		if (i == idx)
		{
			current = tmp->next;
			tmp->next = new_node;
			new_node->next = current;
			return (new_node);
		} i++;
		tmp = tmp->next;
	} return (NULL);
}
