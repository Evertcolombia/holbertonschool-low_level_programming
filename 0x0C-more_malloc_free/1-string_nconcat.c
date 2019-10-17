#include <stdlib.h>

/**
 * _strlen - show the lenght of a string
 * @s: pointe to  pass the array
 *
 * Return: none
 */
unsigned int _strlen(char *s)
{
	unsigned int a = 0;

	while (s[a] != 0)
		a++;
	return (a);
}

/**
 * *string_nconcat - concatenate two strings by one new
 * @s1: string
 * @s2: string
 * @n: value
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int  len1, len2, count, c = 0;

	if (s1 == NULL || s2 == NULL)
		s1 = "", s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		c = len1 + len2;
	/*1*/
	else
		c = len1 + n;
/*c + 1*/
	new = malloc(sizeof(char) * (c + 1));
	if (new == NULL)
		return (NULL);
	/*while (count <= c)*/
	for (count = 0; count < c; count++)
	{
		/*if (count > len1)
		{
			new[count] = s2[d];
			d++;
		}
		else
			new[count] = s1[count];*/
		if (count < len1)
			new[count] = s1[count];
		else
			new[count] = s2[count - len1];
	}
	new[count] = '\0';

	return (new);
}
