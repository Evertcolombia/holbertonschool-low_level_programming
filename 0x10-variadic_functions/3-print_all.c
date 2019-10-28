#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_all - Prints all operation
  * @format: The conversion specifier to prints
  *
  * Return: None
  */
void print_all(const char * const format, ...)
{
	va_list ap;
	f_dt form_t[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_char_ptr}
	};

	unsigned int i = 0, j;
	char *separator = "";

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_t[j].type)
			{
				form_t[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	putchar('\n');
}

/**
  * print_char - Prints a char
  * @separator: string pointer
  * @ap: A list of variadic arguments
  *
  * Return: None
  */
void print_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
  * print_int - Prints a integer
  * @separator: string pointer
  * @ap: A list of variadic argument
  *
  * Return: None
  */
void print_int(char *separator, va_list ap)
{
	printf("%s%i", separator, va_arg(ap, int));
}

/**
  * print_float - Prints a float character
  * @separator: string pointer
  * @ap: A list of variadic argument
  *
  * Return: None
  */
void print_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
  * print_char_ptr - Prints a char pointer content
  * @separator: string pointer
  * @ap: A list of variadic argument
  *
  * Return: None
  */
void print_char_ptr(char *separator, va_list ap)
{
	char *ar = va_arg(ap, char *);

	if (ar == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, ar);
}
