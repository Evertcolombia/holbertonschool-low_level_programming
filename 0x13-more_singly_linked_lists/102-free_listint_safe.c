#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp = NULL;

	while(*h != NULL)
	{
		count++;
		tmp = *h;
		*h = (*h)->next;
		free(tmp);
		if ((tmp->next) >= tmp)
		{
			free(tmp->next);
			*h = NULL;
			return(count);
		}
		
	}
	*h = NULL;
	return (count);
}
