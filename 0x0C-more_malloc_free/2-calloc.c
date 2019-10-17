#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: value
 * @size: value
 *
 * Return: string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int count, c;
	char *res;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	c = nmemb * size;
	res = malloc(c);
	if (res == NULL)
		return (NULL);

	for (count = 0; count < c; count++)
		res[count] = 0;
	return (res);
}
