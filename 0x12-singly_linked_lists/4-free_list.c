#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
	list_t *tmp_node;
	/*tmp_node = head;*/
	
	while (head != NULL)
	{
		tmp_node = head, head = head->next;
		free(tmp_node->str), free(tmp_node);
	} free(head);
}
