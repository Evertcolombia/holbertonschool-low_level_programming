#include "holberton.h"

/**
 * puts_half - puts half string
 * @str: string
 * Return: none
 */
void puts_half(char *str)
{
	int len, i;
	char *cp = str;

	for (len = 0; *cp != '\0'; cp++)
		len++;

	i = (len % 2 == 0) ? (len / 2) : ((len - 1) / 2);
	str += i;
	for (; i <= len; i++)
		_putchar(*str++);
	_putchar(9);
}
