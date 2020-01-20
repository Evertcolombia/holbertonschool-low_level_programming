#include "lists.h"

/**
 * print_listint_safe - print a list
 * @head: linked list
 *
 * Return: count of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		if ((head->next) >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (count);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	} return (count);
}
