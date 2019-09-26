#include "holberton.h"
/**
 * print_square - prints a square of hastag depending of the num of param
 *@size: int number
 *
 * Return: nothing
 */

void print_square(int size)
{
	int a;
	int b;

	if (size <= 0)
		_putchar('\n');

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size ; b++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
