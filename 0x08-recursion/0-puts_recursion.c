#include "holberton.h"

/**
 * _puts_recursion - print recursion
 * @s: string print
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar(10);
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
