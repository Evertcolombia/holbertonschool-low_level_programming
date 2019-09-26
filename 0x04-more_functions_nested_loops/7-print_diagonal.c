#include "holberton.h"
/**
 * print_diagonal - print digaonal result
 * @n: number
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;
	int r;

	for (i = 0; i < n; i++)
	{
		for (r = 0; r < i; r++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
