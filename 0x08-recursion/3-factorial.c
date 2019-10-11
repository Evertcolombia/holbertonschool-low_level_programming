#include "holberton.h"

/**
 * factorial - give the factorial of a number
 * @n: number
 * Return: integer
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
