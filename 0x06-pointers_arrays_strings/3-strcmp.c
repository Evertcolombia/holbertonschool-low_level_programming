#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: value
 */

/*int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int value = 0;

	while (s1[count] != '\0')
	{
		if (s1[count] > s2[count])
		{
			return (s1[count] - s2[count]);
		}
		else if (s1[count] < s2[count])
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	return (value);
}*/

/**
 * _strlen - show the lenght of a string
 * @s: pointe to  pass the array
 *
 * Return: none
 */
int _strlen(char *s)
{
    int i = 0;

    while (s[i])
        ++i;
    return (i);
}

int _strcmp(char *s1, char *s2)
{
    int a, b;

    a = _strlen(s1), b = _strlen(s2);

    if (a > b)
        return (15);    
    else if (b > a)
        return (-15);
    else
    return(0);
}
