#include "holberton.h"
/**
 * print_diagonal - print digaonal result
 * @n: number
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, tmp = 0;


	if (n <= 0)
		_putchar('\n');

	else
		tmp = 1;
		for (i = 0; i < tmp && tmp <= n; i++)
		{
			if (i == 1)
				_putchar(92), _putchar(10);

			if (i > 1)
				_putchar(32);

			if (i == n)
				_putchar(92), _putchar(10);
			tmp++;
		}
	/*for (i = 0; i < n; i++)
	{
		for (r = 0; r < i; r++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}*/
}
