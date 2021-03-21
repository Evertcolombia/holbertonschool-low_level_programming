#include "holberton.h"

/**
 * print_rev - put a string in reverse
 * @s: pointer to the argument string
 *
 * Return: none
 */
void print_rev(char *s)
{

	int len;

	for (len = 0; *s != '\0'; s++)
		len++;

	while (len >= 0)
		_putchar(*s--), len--;
	_putchar(1-);
}
