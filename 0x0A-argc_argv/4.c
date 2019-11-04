#include <string.h>
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
	char n[100];
	int sum = 0;
	char *c;

	argv++;
	while (--argc)
	{
		sprintf(n, "%d", atoi(*argv));
		c = n;
		if (strcmp(*argv, c))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum = sum + strtol(*argv, NULL, 10);
		argv++;
	}
	printf("%d\n", sum);
	return (0);
}
