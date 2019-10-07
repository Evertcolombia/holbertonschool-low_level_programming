#include "holberton.h"

/**
 * reverse_array - reverse
 * @a: value
 * @n: value
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int b[1000];
	int count, length;
	int c = 0;

	length = n - 1;
	for (count = length; count >=  0; count--)
	{
		b[c] = a[count];
		c++;
	}
	c = 0;
	for (; c <= length; c++)
		a[c] = b[c];
}
