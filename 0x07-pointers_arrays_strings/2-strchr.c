#include "holberton.h"

int _strlen(char *s);

/**
 * *_strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character with the n of index
 * Return:  pointer
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int length = _strlen(s);
	char *r = '\0';

	while (i < length)
	{
		if (s[i] ==  c)
		{
			r = &s[i];
			break;
		}
		i++;
	}
	return (r);
}

/**
 * _strlen - show the lenght of a string
 * @s: pointe to  pass the array
 *
 * Return: none
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a])
		++a;
	return (a);
}
