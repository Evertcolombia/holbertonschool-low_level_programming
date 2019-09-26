#include "holberton.h"
#include <ctype.h>

/**
 * _isdigit - verificate if is a digit the parameter
 *@c: int with a character
 *
 * Return: 1 on success
 */

int _isdigit(int c)
{
	int res = 0;

	if (isdigit(c))
	{
		res = 1;
		return (res);
	}
	else
	{
	return (0);
	}
}
