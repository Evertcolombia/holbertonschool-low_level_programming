#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum elements throught a list
 * @head: lined list pointer
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	} return (sum);
}
