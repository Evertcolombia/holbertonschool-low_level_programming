#include "holberton.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: On (success) 1
 */

void print_alphabet_x10(void)
{

	int ch;
	int count = 0;

	while (count < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		count++;
		_putchar('\n');
	}
}
