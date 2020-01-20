#include "lists.h"

/**
 * reverse_listint - reverse a lined list
 * @head: head of list
 *
 * Return: head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = NULL, *tmp1 = NULL;

	if (*head != NULL)
	{
		tmp = *head;
		tmp1 = (*head)->next;
		*head = (*head)->next;

		tmp->next = NULL;

		while (*head != NULL)
		{
			*head = (*head)->next;
			tmp1->next = tmp;

			tmp = tmp1;
			tmp1 = *head;
		}
		*head = tmp;
	} return (*head);
}
