#include "holberton.h"
/**
 * _atoi - 	entry point
 * @s: pointer to the argument string
 *
 * Return: Integer
 */

int _atoi(char *s)
{
	int count = 0, flag = 0;
	unsigned int res = 0;
        
	while (s[count] != '\0')
	{
		if (s[count] > 47 && s[count] < 58)
		{
			res = res * 10 + s[count] - '0';
			if (s[count + 1] < 48 || s[count + 1] > 57)
				break;
		}
		else {
			if (s[count] == '-')
				flag++;
		}
		count++;
	}

	if (flag % 2 != 0)
		res = res * -1;
	
	return (res);
}
