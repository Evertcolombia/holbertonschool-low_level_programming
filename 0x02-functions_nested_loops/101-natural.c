#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (succes)
 */
int main(void)
{
	int num, mul3 = 0, mul5 = 0, total;

	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			mul3 = mul3 + num;
		mul3 = mul3;
	}
	total = mul3;
	printf("%d", total), putchar(10);
	return (0);
}
