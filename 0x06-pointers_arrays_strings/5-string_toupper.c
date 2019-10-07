#include "holberton.h"

/**
 * *string_toupper - string upper
 * @str: string
 * Return: string upper
 */
char *string_toupper(char *str)
{
	int count = 0;

	while (str[count])
	{
		if (str[count] >= 97 && str[count] <= 122)
			str[count] = (str[count] - 32);
		++count;
	}
	return (str);
}
