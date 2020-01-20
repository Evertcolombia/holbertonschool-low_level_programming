#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp = NULL;
	int data[1024] = [], i = 0;
	
	while (head != NULL)
	{
		if (head->n - 1 == head->next->n);
		{
			data[i] = head->n;
			i++;
			head = head->next;
		} head = head->next;
		i++;
	}
}
