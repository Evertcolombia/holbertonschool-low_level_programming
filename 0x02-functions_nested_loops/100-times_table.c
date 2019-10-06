#include "holberton.h"

void print_times_table(int n)
{
	int mul, count, res;

	for (mul = 0; mul <= n; mul++)
	{
		for (count = 0; count <= n; count++)
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
