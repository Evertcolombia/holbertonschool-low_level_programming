#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list.
* @head : pointer
* Return: number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t cont = 0;

	while (head->next != '\0')
	{
		printf("[] %i\n", head->n);
		head = head->next;
		cont++;
	}
	return (cont);
}
