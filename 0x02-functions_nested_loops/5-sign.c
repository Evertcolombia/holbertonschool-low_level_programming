#include "holberton.h"

/**
 * print_sign - show a number and state
 * @n : data
 *
 * Return: Always (success)
 */

int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar(43);
	}
	else if (n == 0)
	{
		num = 0;
		_putchar(48);
	}
	else if (n < 0)
	{
		num = -1;
		_putchar(45);
	}
	return (num);
}
