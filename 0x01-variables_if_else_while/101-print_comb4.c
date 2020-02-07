#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned int i, j, c, d;

	c = 48, d = 48, i = 49;

	for (; i < 57; i++)
	{
		j = i + 1;
		for (; j <= 57; j++)
		{
			putchar(c), putchar(i), putchar(j);

			if (c == 55 && i == 56 && j == 57)
				putchar(10);
			else
				putchar(44), putchar(32);
		}
		if (i == 56)
			c += 1, d += 1, i = d;
	}
	return (0);
}
