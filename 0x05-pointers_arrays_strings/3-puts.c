#include "holberton.h"

/**
 * _strlen - show the lenght of a string
 * @s: pointe to  pass the array
 *
 * Return: none
 */
void _puts(char *str)
{
    int i = 0;
    
    while (str[i])
        _putchar(str[i]), ++i;
    _putchar(10);
    
}
