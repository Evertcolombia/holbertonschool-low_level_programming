#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints all undefined arguments
 * @separator: char
 * @n: value
 *
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i = 0;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_list, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_list);
}
