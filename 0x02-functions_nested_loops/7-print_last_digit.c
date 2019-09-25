#include "holberton.h"

/**
 * _abs - value total
 * @n: value
 *
 * Return: total.
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);

}

int print_last_digit(int n)
{

	int r;

	r = n % 10;
	r = _abs(r);
	_putchar(r + '0');

	return (r);
}
