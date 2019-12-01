#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

int _strlen(char *s);

char *argstostr(int ac, char **av)
{
	char *ptr = NULL;
	int  count = 0, b = 0, c = 0, i, len, argc = ac;

	if (ac == 0 || av == NULL)
		return(NULL);

	for (i = ac; i >= 0; i--)
	{
		b += _strlen(av[i]) + 1;
	}
	b++;

	ptr = malloc(b * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	while (argc >= 0)
	{
		len = _strlen(av[c]);
		for (ac = 0; ac < len; ac++)
		{
			ptr[count] = av[c][ac];
			count++;
		}
		ptr[count] = '\n';
		c++;
		argc--;
	}
	return (ptr);
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
