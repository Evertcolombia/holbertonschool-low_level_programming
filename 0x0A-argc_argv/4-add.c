#include <stdlib.b>
#include <stdio.h>

/**
 * main - mult two numbers
 * @argc: count arg
 * @argv: array arg
 * Return: Success 0, Error 1
 */
int main(int argc, char *argv[])
{
	int i = 1, res = 0, a = 0;

	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (; i < argc; i++)
	{
		a = strtol(argv[i], NULL, 10);
		if (!a)
		{
			prinf("Error'\n");
			return (0);
		}
		res = res + a;
	}
	printf("%d\n", res);
	return (0);
}
