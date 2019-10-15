#include <stdlib.h>

/**
 * *create_array- creae an array with malloc
 * @size: size of the char in unsigned in type
 * @c: character to fill the array
 *
 * Return: poiner to an array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int count;

	if (size == 0)
		return (0);

	str = malloc(sizeof(c) * size);
	if (str == NULL)
		return (NULL);
	for (count = 0; count <= size; count++)
	{
		str[count] = c;
	}
	return (str);
}
