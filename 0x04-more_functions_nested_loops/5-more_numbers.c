#include "holberton.h"

void more_numbers(void)
{
	int i;
	int f;
	int m;

	int c = 0;

	while(c < 11)
	{
       		for (i = 0; i <15; i++)
		{
			f = i;
			if (i > 9)
			{
				f = i / 10;
				m = i % 10;
			}
			_putchar(f + '0');
		}
	}
}

