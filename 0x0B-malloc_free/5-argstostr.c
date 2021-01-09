#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - entry point
 * @ac: int variable
 * @av: char variable
 *
 * Return: s or NULL
 */

int _strlen(char *s);
char *argstostr(int ac, char **av)
{
	int len = 0, i, c, count = 0;
	char *s = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
		len += _strlen(av[i]) + 1;

	s = malloc(len * sizeof s);
	if (!s)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (c = 0; av[i][c]; c++)
			s[count++] = av[i][c];
		s[count++] = 10;
	}
	return(s);
}

int _strlen(char *s)
{
	int i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}
