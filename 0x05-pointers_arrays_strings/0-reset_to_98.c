#include "holberton.h"

/**
 * reset_to_98  - Entry point
 *
 * Return: none
 */
void reset_to_98(int *n)
{
	int *ptr;

	ptr = &*n;

	*ptr = 98;
}
