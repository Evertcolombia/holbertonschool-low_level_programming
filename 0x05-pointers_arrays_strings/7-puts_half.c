#include "holberton.h"

/**
 * puts_half - puts half string
 * @str: string
 * Return: none
 */
void puts_half(char *str)
{
	int count = 0;
	int length_of_the_string, a, half;

	while (str[count])
		count++;
	length_of_the_string = count;

	if (length_of_the_string % 2 != 0)
		a = (length_of_the_string - 1) / 2;
	else
		a = length_of_the_string / 2;

	half = length_of_the_string - a;
	for (; half < length_of_the_string; half++)
		_putchar(str[half]);

	_putchar('\n');
}
