#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: char
 * @n: value
 *
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap,char *);

		ptr != NULL ? printf("%s", ptr) : printf("(nil)");
		if (i < (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	putchar(10);
}
