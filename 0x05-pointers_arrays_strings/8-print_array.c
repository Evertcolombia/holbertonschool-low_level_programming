#include <stdio.h>

/**
 * print_array - print array
 * @a: array
 * @n: number iteration
 * Return: none
 */
void print_array(int *a, int n)
{
	int count, length;

	length = n - 1;
	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count != length)
			printf(", ");
	}
	putchar('\n');
}
