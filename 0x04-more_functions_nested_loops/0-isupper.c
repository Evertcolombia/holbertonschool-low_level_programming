#include "holberton.h"
#include <ctype.h>

/**
 * _isupper - verificate if is upper the parameter
 *@c: int with a character
 *
 * Return: 1 on success
 */

int _isupper(int c)
{
	int res, ret;

	for (res = 'A'; res <= 'Z'; res++)
	{
		if (res == c)
			ret = 1;
	}
	return (ret);
}
