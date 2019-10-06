#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Al ways 0 (success)
 *
 */
int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(32);
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
			putchar(32);
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
			putchar(32);
		}
		else
		{
			printf("%d", count);
			putchar(32);
		}
	}
	return (0);
}
