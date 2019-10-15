#include <stdio.h>

/**
 * main - entry - point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long f = 0, f1 = 1, res;
	int count;

	for (count = 0; count <= 50; count++)
	{
		res = f + f1;
		f = f1, f1 = res;

		if (res > 9)
		{
			if (res > 99)
				printf("%lu", res);
			else
				printf("%lu", res);
		}
		else
			printf("%lu", res);
		if (count != 50)
			putchar(44), putchar(32);
	}
	putchar(10);
	return (0);
}
