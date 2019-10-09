#include "holberton.h"

/**
 * _strlen_recursion - recursion
 * @s: string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int n = 0;
	int b = 0;

	if (*s != '\0')
	{
		s++;
		b++;
		n = _strlen_recursion(s);
	}
	return (b + n);
}
