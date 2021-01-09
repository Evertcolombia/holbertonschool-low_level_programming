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
	int i, c;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(height * sizeof *s);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof i);
		if (s[i] == NULL)
		{
			free_grid(s, i);
			return(NULL);
		}
		for (c = 0; c < width; c++)
			s[i][c] = 0;
	}
	return (s);
}
