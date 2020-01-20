#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		if ((head->next) >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (nodes);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
		
	}
	return (count);
}
