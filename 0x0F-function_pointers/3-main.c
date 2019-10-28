#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry - point
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: integer on success
 */
int main(int argc, char *argv[])
{
	int (*point)(int, int);
	int res, c, d;

	if (argc != 4)
		return (__RETURN__(98));

	c = atoi(argv[3]);
	if (c == 0 && (*argv[2] == '%' || *argv[2] == '/'))
		return (__RETURN__(100));

	point = get_op_func(argv[2]);
	if (point == NULL)
		return (__RETURN__(99));

	c = atoi(argv[1]);
	d = atoi(argv[3]);

	res = point(c, d);
	printf("%d\n", res);

	return (0);
}
