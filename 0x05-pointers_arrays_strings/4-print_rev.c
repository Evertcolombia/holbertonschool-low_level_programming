#include "holberton.h"
/**
 * _strlen - show the lenght of a string
 * @s: pointe to  pass the array
 *
 * Return: a
 */
int _strlen(char *s)

{
	int a = 0;

	while (s[a])
	{
		++a;
	}

	return (a);
}

/**
 * print_rev - put a string in reverse
 * @s: pointer to the argument string
 *
 * Return: none
 */
void print_rev(char *s)
{

	int count;
	int i;

	i = _strlen(s);

	for (count = i; count >= 0 ; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
