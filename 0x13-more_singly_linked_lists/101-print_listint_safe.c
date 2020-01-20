#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		printf("[] %i\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}
