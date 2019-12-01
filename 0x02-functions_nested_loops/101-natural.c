#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (succes)
 */
int main(void)
{
	int num, sum;

	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
	}
	printf("%d", sum), putchar(10);
	return (0);
}
