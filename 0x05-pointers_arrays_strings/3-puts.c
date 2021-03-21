#include "holberton.h"

/**
 * _puts - prints  a string
 * @str: pointee to  pass the string
 *
 * Return: none
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar(10);
}
