#include "lists.h"

/**
 * free_dlistint - frees double linked list
 * @head: header
 *
 * Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		exit(0);
	tmp = head;
	if (head->prev == NULL && head->next == NULL)
	{
		/*free(tmp->n);*/
		free(tmp);
	}
	else
	{
		while (head !=  NULL)
		{
			tmp = head;
			head = head->next;
			/*free(tmp->n);*/
			free(tmp);
		} free(head);
	}
}
