#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - alloc grid
 * @width: width
 * @height: height
 * Return: array multidimensional
 */
int **alloc_grid(int width, int height)
{
	int **table;
	int a, b, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	table = (int **)malloc(height * sizeof(int *));
	if (table == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		table[a] = (int *)malloc(width * sizeof(int));
		if (table[a] == NULL)
		{
			free(table);
			for (i = 0; i < a; i++)
				free(table[i]);
		}
	}
	a = 0,  b = 0;

	for (; a < height; a++)
	{
		for (; b < width; b++)
			table[a][b] = 0;
	}
	return (table);
}
