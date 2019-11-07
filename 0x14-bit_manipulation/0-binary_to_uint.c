#include "holberton.h"
#include <stdio.h>

int _strlen(const char *s);

/**
 * binary_to_uint - converts in to binary
 * @b: array
 *
 * Return: value integer
 */
unsigned int binary_to_uint(const char *b)
{
        int  str = 0;
        unsigned int res = 0;
        int base = 1;

        if (b == NULL)
                return (0);
        str = _strlen(b) - 1;

        for (; str >= 0; str --)
        {
                if (b[str] != 48 &&  b[str] != 49)
                        return (0);

                res += (b[str] - 48) * base;
                base = base * 2;
        } return (res);
}

/**
 * _strlen - length of an array
 * @s: array
 *
 * Return: integer
 */
int _strlen(const char *s)
{
        int a = 0;

        while (s[a])
        ++a;
        return (a);
}
