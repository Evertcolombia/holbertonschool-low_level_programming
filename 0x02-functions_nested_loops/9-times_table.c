#include "holberton.h"

/**
 * times_table - print 9 times tables
 *
 * return - none
 */
void times_table(void)
{

	int count, mul, res;

	for (mul = 0; mul <= 9; mul++)
	{
		for (count = 0; count <= 9; count++)
		{
			res = mul * count;
			if (res > 9)
			{
				_putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			else
			{
				if (mul != 0)
				{
					_putchar(' ');
				}
				_putchar(' ');
				_putchar(res + '0');
			}
			if (count != 9)
				_putchar(44);
		}
		 _putchar('\n');
	}
}
