#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 48, j = 49, c = 48, d = 48;

	for (; i < 58; i++)
	{
		for (j = i; j <= 57; j++)
		{
			if (i <= 57 && j <= 57)
			{
				putchar(c), putchar(d), putchar(32);
				putchar(i), putchar(j);
				putchar(44), putchar(32);
			}
		}

		/*if (i == 57 && j == 58)
		{
			if (d == 56)
				c += 1, d = 0;
			d += 1;

			i = c, j = d + 1;
		}*/
		
	} return (0);
}
