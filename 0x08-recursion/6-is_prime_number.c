#include <stdio.h>

/**
 * _is_prime - converts an int
 * @n: int number
 * @inc: increment for prime
 *
 * Return: succes
 */
int _is_prime(int n, int inc)
{
	int cont;

	if (n < 0)
		return (0);
	if ((n % inc) != 0 && (n > inc))
	{
		cont = _is_prime(n, ++inc);
		return (1 * cont);
	}
	else if (n == inc)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * is_prime_number - show if a number is prime
 * @n: numer to analice
 *
 * Return: number prime
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}
