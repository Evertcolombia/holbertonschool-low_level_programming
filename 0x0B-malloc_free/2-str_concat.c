#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenate two strings
 * @s1: string
 * @s2: string
 *
 * Return: pointer to a string (str)
 */

int _strlen(char *s);
char *str_concat(char *s1, char *s2)
{
	int a, b, c = 0, i = 0;
	char *s = NULL;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = _strlen(s1);
	b = _strlen(s2);
	s = malloc(a + b * sizeof s);
	if (s == NULL)
		return(NULL);

	for (; i < a + b; i++)
		s[i] = i < a ? s1[i] : s2[c++];
	return (s);
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
