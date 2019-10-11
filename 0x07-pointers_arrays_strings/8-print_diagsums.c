#include <stdio.h>
/**
 * print_diagsums - print diagsums
 * @a: array
 * @size: size array
 * Return: none print
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int ind1 = 0;
	int ind2 = size - 1;
	int tam2 = size - 1;
	int tam = size;

	while (size--)
	{
		sum1 = sum1 + a[ind1];
		ind1 = ind1 + tam + 1;
		sum2 = sum2 + a[ind2];
		ind2 = ind2 + tam2;
	}

	printf("%d, %d\n", sum1, sum2);
}
