#include <stdio.h>
#include "lists.h"

/**
 * func - execute a printf
 *
 * Return: none
 */
void func(void) __attribute__((constructor));
void func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
