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
	int res = 0;

	if (isupper(c))
	{
		res = 1;
		return (res);
	}
	else
	{
		return (0);
	}
}
