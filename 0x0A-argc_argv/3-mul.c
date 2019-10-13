#include <stdlib.h>
#include <stdio.h>

/**
 * main - mult two numbers
 * @argc: count arg
 * @argv: array arg
 * Return: Success 0, Error 1
 */
int main(int argc, char *argv[])
{
	int opr1, opr2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	opr1 = strtol(argv[1], NULL, 10);
	opr2 = strtol(argv[2], NULL, 10);
	printf("%d\n", opr1 * opr2);
	return (0);
}
