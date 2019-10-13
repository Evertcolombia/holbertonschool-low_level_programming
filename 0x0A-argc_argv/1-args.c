#include <stdio.h>

/**
 * main - print n arg
 * @argc: arguments number
 * @argv: array call arg
 * Return: Success 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", --argc);
	return (0);
}
