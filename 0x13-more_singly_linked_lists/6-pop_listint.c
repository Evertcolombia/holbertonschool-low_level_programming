#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head nose
 * @head: double pointer
 *
 * Return: data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		data = tmp->n;
		free(tmp);
		return (data);
	} return (0);
}
