#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i;
	char hexadecimals[] = "0123456789abcdef";
	char word;

	for (i = 0; i <= 16; i++)
	{
		word = hexadecimals[i];
		putchar(word);
	}

	putchar('\n');
	return (0);
}
