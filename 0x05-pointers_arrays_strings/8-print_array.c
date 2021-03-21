#include <stdio.h>
/**
 * print_array - print array
 * @a: array
 * @n: number iteration
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n && (*a + 1) != '\0'; i++)
		printf("%i", *a++);
	printf("%i\n", *a);
}
