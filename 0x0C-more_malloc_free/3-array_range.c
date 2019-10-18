#include <stdlib.h>

/**
 * *array_range - malloc of an array of integers
 * @min: value
 * @max: value
 *
 * Return: value
 */
int *array_range(int min, int max)
{
	int *res, count = 0, r;

	if (min > max)
		return (NULL);

	r  = max - min;
	res = malloc(sizeof(int) * (r + 1));
	if (res == NULL)
		return (NULL);
	res[count] = min;
	min++;
	for (count = 1; count <= r; count++)
	{
		res[count] = min;
		min++;
	}
	return (res);
}
