#include <stdlib.h>

/**
 * *_strdup - Copy a sring o a new poiner using malloc
 * @str: poiner to an string
 *
 * Return: pointer to a array copy (s)
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, count = 0, length;

	while (str[i])
		i++;
	length = i - 1;
	if (str == NULL)
		return (NULL);
	s = malloc(sizeof(char) * length);
	if (s == NULL)
		return (NULL);
	for (count = 0; count <= i; count++)
		s[count] = str[count];
	return (s);

}
