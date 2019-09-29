#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 57 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		b = 48;
	}
	putchar('\n');
	return (0);
}
