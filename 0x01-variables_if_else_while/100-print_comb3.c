#include <stdio.h>

/**
 *
 * main - Entry Point
 *
 */

int main(void)
{

	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 1; b < 10; b++)
		{
			if (b > a)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
