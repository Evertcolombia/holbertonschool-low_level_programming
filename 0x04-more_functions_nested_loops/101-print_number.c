#include "holberton.h"
void print_number(int n)
{
	
	if (n >= 10)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
/*	if (n >= 1000)
	{
		b =  (n / 100) / 10;
		_putchar(b + '0');
		_putchar((n / 10) / 10 + '0');
		_putchar((n % 100) / 10  + '0');
		_putchar(n % 10 + '0');
	}*/
	else if (n > 99)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10  + '0');
		_putchar(n % 10 + '0');
	}
	else
		_putchar(n + '0');
}
