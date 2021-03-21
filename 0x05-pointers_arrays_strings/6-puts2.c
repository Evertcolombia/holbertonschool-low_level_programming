#include "holberton.h"

/**
 * puts2 - puts
 * @str: string
 * Return: none
 */
void puts2(char *str)
{
	while(*str)
	{
		if (*str % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar(10);
}
