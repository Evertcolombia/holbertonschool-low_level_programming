#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: double pointer to the head
 * @n: integer
 *
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *tmp = NULL;

	if (head == NULL)
		return (NULL);
	tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;

	return (*head);
}
