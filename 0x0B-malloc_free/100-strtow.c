#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s, int *i);
char **strtow(char *str)
{
	int i, count = 0, len = 0, r = 0, copy = 0;
	char **s;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	s = malloc(100 * sizeof  *s);
	if (s == NULL)
		return (NULL);
	
	for (i = 0; str[i]; i++)
	{
		if (str[i] != 32)
		{
			copy = i;
			len = _strlen(str, &i);
			printf("%d\n", len);
			
			s[count] = malloc(len * sizeof *s);
			if (s[count] == NULL)
			{
				free_grid(s, i);
				return(NULL);
			}

			for (r = 0; r < len; r++)
			{	if (copy < i)
				{
					s[count][r] = str[copy];
					copy++;
				}
			}
			count++;
		}
		else
		{
			while (str[i] == 32 && str[i + 1] == 32)
				i++;
		}
	}
	return (s);
}

int _strlen(char *str, int *i)
{
	int len = 0;
	int c = 0;

	c = *i;
	while (str[c] != 32)
	{
		if (str[c] > 64 && str[c] < 91)
		{
			if (len == 0 && (str[c + 1] > 96 && str[c + 1] < 123))
				len++;
			else if (len == 0 && (str[c + 1]  > 64 && str[c + 1] < 91))
				len++;
			else
				len++;
		}
		else if (str[c] > 96 && str[c] < 123)
		{
			if (len == 0 && (str[c + 1] > 96 && str[c + 1] < 123))
				len++;
			else if (len == 0 && (str[c + 1]  > 64 && str[c + 1] < 91))
				len++;
			else 
				len++;
		}
		else if (str[c] == 35)
		{
			if (str[c + 1]  > 64 && str[c + 1] < 91)
				len++;
			else if (str[c + 1] > 96 && str[c + 1] < 123)
				len++;
		}
		else if (str[c] == 46 && str[c + 1] == 32)
			len++;
		c++;
		*i = c;
	}
	return (len);
}
