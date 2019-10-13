#include <stdio.h>


/**
 * main - print all arg
 * @argc: count
 * @argv: array
 * Return: Success 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
