#include "holberton.h"
/**
 * print_line - print line
 * @n: number
 *
 * Return: nothing
 */

void print_line(int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
