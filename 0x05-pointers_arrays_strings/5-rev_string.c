#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: pointer for a char
 *
 * return  - nothing
 */
void rev_string(char *s)
{

	int len;
	char cp[1024], *init = s;

	for (len = 0; *s != '\0' && (*s + 1) != '\0'; s++)
		cp[len++] = *s;

	s = init, len -= 1;
	while (len >= 0)
		*s++ = cp[len--];
}
