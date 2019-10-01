#include "holberton.h"

/**
 * print_rev - put a string in reverse
 * @s: pointer to the argument string
 *
 * Return: none
 */
void print_rev(char *s)
{

	int length;
	int a = 0;
	int count;

	while (s[a])
		++a;

	length = a;

	for (count = length - 1; count >= 0 ; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
