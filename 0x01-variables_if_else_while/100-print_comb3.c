#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num1, num2 = 49, num3;

	for (num1 = 48; num1 < 57; num1++)
	{
		num3 = num2;
		for (; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 == 56 && num2 == 57)
				putchar(10);
			else
			{
				putchar(44);
				putchar(32);
			}
		}
		num2 = num3;
		num2++;
	}
	return (0);
}
