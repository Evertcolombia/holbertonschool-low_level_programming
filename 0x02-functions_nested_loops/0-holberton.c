#include "holberton.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char *c = "Holberton";
	unsigned long i;

	for (i = 0; i <= sizeof(c); i++)
		_putchar(c[i]);
	_putchar('\n');
	return (0);
}
