#include <stdlib.h>

/**
 * array_iterator - iterate an array with callbacks
 * @array: array integers
 * @size: value
 * @action: pointer to function
 *
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
