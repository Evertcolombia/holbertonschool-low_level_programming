#include <stdlib.h>
#include <stdio.h>

/**
 * main - changes money
 * @argc: count arg
 * @argv: array arg
 * Return: Sucess 0, Error 1
 */
int main(int argc, char *argv[])
{
	int c[5] = {25, 10, 5, 2, 1};
	int sum = 0, num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (num > 0)
	{
		if ((num - c[0]) >= 0)
			num = num - c[0], sum++;
		else if ((num - c[1]) >= 0)
			num = num - c[1], sum++;
		else if ((num - c[2]) >= 0)
			num = num - c[2], sum++;
		else if ((num - c[3]) >= 0)
			num = num - c[3], sum++;
		else if (num >= c[4])
		num = num - c[4], sum++;
	}
	printf("%d\n", sum);
	return (0);
}
