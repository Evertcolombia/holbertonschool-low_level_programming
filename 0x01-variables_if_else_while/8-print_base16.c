#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) 
{

int i;
char hexadecimals[16] = "0123456789abcdef";
char word;

i = 0;
while (i < 16) 
{
word = hexadecimals[i];
putchar(word);
i++;
}

putchar('\n');
return (0);
}
