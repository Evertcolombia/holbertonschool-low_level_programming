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
			printf("FizzBuzz");
		else if (count % 3 == 0)
			printf("Fizz");
		else if (count % 5 == 0)
			printf("Buzz");
		else
			printf("%d", count);
		count  != 100 ? putchar(32) : putchar('\n');
	}
	return (0);
}
