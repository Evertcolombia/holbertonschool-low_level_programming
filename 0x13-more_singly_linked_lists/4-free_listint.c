#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a list
 * @head: linked list
 *
 * Return: none
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
