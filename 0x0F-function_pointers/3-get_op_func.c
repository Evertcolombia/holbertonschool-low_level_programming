#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - pointer to a function
 * @s: pointer to a char
 *
 * Return: pointer function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops[i]).op == *s)
		{
			if (*(s + 1) == '\0')
				return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
