#include "holberton.h"

/**
 * print_last_digit - print last digit of a number
 * _abs - show an int by stdout c
 * @n: value
 *
 * Return: on (success) 1
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
