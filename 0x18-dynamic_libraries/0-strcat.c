#include "holberton.h"

/**
 * *_strcat - concatenate dos strings
 * @dest: pointer to a string
 * @src: pointer to the strign to concatenate
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, a, b;

	a = _strlen(dest);
	b = _strlen(src);

	for (i = 0; i <= b; i++)
		dest[a + i] = src[i];

	return (dest);
}
