#include <stdlib.h>

/**
 * *malloc_checked - function to reserve space memory
 * @b: unsigned value
 *
 * Return: value
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
