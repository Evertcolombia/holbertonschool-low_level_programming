#include "holberton.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: On (success) 1
 */
void print_alphabet(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}
