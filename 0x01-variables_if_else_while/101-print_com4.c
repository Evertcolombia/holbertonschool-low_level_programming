#include <stdio.h>

/**
 * main - entry point
 *
 * return: always 0 (success)
 */
int main(void)
{
	int num1, num2, num;

	for (num = 48; num < 56; num++)
	{
		for (num1 = 49; num1 < 57; num1++)
		{
			for (num2 = 50; num2 <= 57; num2++)
			{
                                putchar(num), putchar(num1), putchar(num2);     				if (num1 == 56 && num2 == 57 && num == 55)
					putchar(10);
				else
				{
					putchar(44), putchar(32);
				}
			}
		}
	}
	return (0);
}
