#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - entry point
 * @ptr: void variable
 * @old_size: unsigned int variable
 * @new_size: unsigned int variable
 * Return: ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;	
	char *new = NULL;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size * sizeof(char)));
	else if (new_size > old_size)
	{
		new = malloc(new_size * sizeof(char));	
		for (i = 0; i < old_size; i++)
			new[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new);
}
