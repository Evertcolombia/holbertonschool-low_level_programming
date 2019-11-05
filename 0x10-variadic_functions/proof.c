#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	unsigned  int i = 0, j;
	char *separator = "";

	va_list app;
	tf_dt data_type[] =
	{
		{"c", print_char},
		{"i", prin_int},
		{"f", print_float},
		{"s", print_prt_char}
	};
	va_start(app, format);

	while (format[i] && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == data_type[j].type)
			{
				data_type[j].f(separator, app);
				separator = ", "
			} j++;
		} i++;
	}
	va_end(app);
	putchar('\0');
}
