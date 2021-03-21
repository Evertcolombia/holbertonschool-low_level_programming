#include "holberton.h"

/**
 * *_strcpy - copy a string from another pointer
 * @dest: pointer to a string
 * @src: pointer to the strign to concatenate
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *cp = dest;

	while ((*dest++ = *src++))
		;
	dest = cp;
	return (dest);
}
