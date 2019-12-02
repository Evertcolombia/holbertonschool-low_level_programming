#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:  0 (on success)
 */
int main(void)
{
	unsigned long num_1 = 0, num_2 = 1, sum = 0, total = 0;
	int count;

	for (count = 0; count < 50; count++)
	{
		sum = num_1 + num_2;
		num_1 = num_2;
		num_2 = sum;

		if (num_1 % 2 == 0)
			total += num_1;
		else if (num_2 % 2 == 0)
			total += num_2;
		printf("%lu, ", sum);

	}
	putchar(10);
	printf("%lu\n", total);
	return (0);
}
