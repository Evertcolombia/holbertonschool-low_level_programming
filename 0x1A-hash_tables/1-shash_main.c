#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables_php.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "betty", "holberton");
    return (EXIT_SUCCESS);
}
