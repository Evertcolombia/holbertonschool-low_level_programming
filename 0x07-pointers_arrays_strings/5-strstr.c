#include <stdlib.h>

/**
 * *_strpbrk - searches string for any set of bytes
 * @s: pointer to a string
 * @accept: pointer to a string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
		if (needle == '\0')
			return(haystack);

		while(*haystack)
		{
			if (*haystack == *needle)
			{
				return (haystack);
			}
			haystack++;
		
		}
		return (0);
}
