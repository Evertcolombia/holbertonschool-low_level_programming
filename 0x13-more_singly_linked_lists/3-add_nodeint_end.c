#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a list
 * @head: double pointer
 * @n: value
 *
 * Return: new node adress
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *new_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;
	return (new_node);
}
