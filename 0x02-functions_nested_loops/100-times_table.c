#include "holberton.h"

/**
 * print_times_table - prints tables times
 * @n: int to number
 *
 * return: none
 */

void print_times_table(int n)
{
	int mul, count, res;

	if (n <= 15 && n >= 0)
	{
		for (mul = 0; mul <= n; mul++)
		{
			for (count = 0; count <= n; count++)
			{
				res = mul * count;
				if (res > 9)
				{
					if (res > 99)
					{
						_putchar(32), _putchar((res / 10) / 10 + '0');
						_putchar((res % 100) / 10 + '0'), _putchar(res % 10 + '0');
					}
					else
					{
						_putchar(32), _putchar(32);
						_putchar(res / 10 + '0'), _putchar(res % 10 + '0');
					}
				}
				else
				{
					if (count != 0)
						_putchar(32), _putchar(32), _putchar(32);
					_putchar(res + '0');
				}
				if (count != n)
					_putchar(44);
			}
			_putchar(10);
		}
	}
}
