#include "holberton.h"

/**
 * times_table - prints tables 9 times
 *
 * return: none
 */
void times_table(void)
{
	int mul, count, res;

	for (mul = 0; mul <= 9; mul++)
	{
		for (count = 0; count <= 9; count++)
		{
			res = mul * count;
			if (res > 9)
			{
				_putchar(32);
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else
			{
				if (count != 0)
				{
					_putchar(32);
					_putchar(32);
				}
				_putchar(res + '0');
			}
			if (count != 9)
				_putchar(44);
		}
		_putchar('\n');
	}
}
