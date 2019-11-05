#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add nodes at the beggin of a list
 * @head: double pointer
 * @n: value
 *
 * Return: nodo adreess
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
