#include "holberton.h"

void puts2(char *str)
{
	int count = 0;
	int length, a;

	while (str[count])
		count++;
	length = count - 1;
	for (a = 0; a  <= length; a++)
	{
		if(str[a] % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
