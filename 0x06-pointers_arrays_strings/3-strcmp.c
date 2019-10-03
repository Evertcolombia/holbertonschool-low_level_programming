#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1 - pointer to a string
 * @a2 - pointer to a string
 *
 * Return : always 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (s1[count] != '\0')
	{
		if (s1[count] > s2[count])
		{
			return(s1[count] - s2 [count]);
		}
		else if (s1[count] < s2[count])
		{
			return(s1[count] - s2[count]);
		}
		count++;
	}
	return (0);
}
