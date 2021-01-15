#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints all undefined arguments
 * @separator: char
 * @n: value
 *
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i = 0;
	char *value;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(arg_list, char *);
		value ? printf("%s", value) : printf("(nil)");
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_list);
}
