#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	int i = 48;
	int j = 48;

	while (i < 58)
	{
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 57 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		j = 48;
		i++;
	}
	putchar('\n');
	return (0);
}
