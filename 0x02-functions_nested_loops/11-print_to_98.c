#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - absoluted value
 * @n: value
 *
 * Return: absoluted.
 */
void print_to_98(int n)
{
	int num;

	if (n == 98)
		printf("%d", n);
	if (n < 98)
	{
		for (num = n; num <= 98; num++)
		{
			printf("%d", num);
			if (num != 98)
				putchar(44), putchar(32);
		}
	}
	if (n > 98)
	{
		for (num = n; num >= 98; num--)
		{
			printf("%d", num);
			if (num != 98)
				putchar(44), putchar(32);
		}
	}
	putchar(10);
}
