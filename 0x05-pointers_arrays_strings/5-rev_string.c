#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: pointer for a char
 *
 * return  - nothing
 */
void rev_string(char *s)
{
	int length, count;
	int a = 0, c = 0;
	char st[10000];

	while (s[a])
		++a;

	length = a - 1;

	for (count = length; count >= 0 ; count--)
	{
		st[c] = s[count];
		c++;
	}
	for (count = 0; count <= length; count++)
	{
		s[count] = st[count];
	}
}
