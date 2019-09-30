#include "holberton.h"

/**
 * more_numbers - print a serie of numbers
 *
 * return none
 */

void more_numbers(void)
{
	int i;
	int f;
	int m;

	int c = 0;

	while (c <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			f = i;
			if (i > 9)
			{
				m = i / 10;
				f = i % 10;
				_putchar(m + '0');
			}
			_putchar(f + '0');
		}
		c++;
		_putchar('\n');
	}
}
