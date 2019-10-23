#include <stdio.h>

/**
 * print_name - print a name value
 * @name: string
 * @f: function pinter
 *
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
