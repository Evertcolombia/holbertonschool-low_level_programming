#include "holberton.h"

/**
 * _print_rev_recursion - print reversion recursio
 * @s: string reversed
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	char a = *s;

	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(a);
	}
}


