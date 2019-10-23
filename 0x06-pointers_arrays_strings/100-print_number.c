#include "holberton.h"

/**
 * print_number - print intenger number
 * @n: integer
 *
 * Return: none
 */
void print_number(int n)
{
	int a;

	if (n < 0)
		_putchar(45), a = n * -1;
	else
		 a = n;
	if (n / 10)
		print_numer(a / 10);
	_putchar(i % 10 + '0');
}
