#include "holberton.h"

/**
 * _puts - prints  a string
 * @str: pointee to  pass the string
 *
 * Return: none
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i]), ++i;
	_putchar(10);
}
