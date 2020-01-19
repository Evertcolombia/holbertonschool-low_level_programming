#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "holberton");
    hash_table_set(ht, "hetairas", "holberton");
    hash_table_set(ht, "mentioner", "holberton");
    hash_table_set(ht, "heliotropes", "neurospora");
    hash_table_set(ht, "depravement", "serafins");
    hash_table_set(ht, "stylist", "holberton");
    hash_table_set(ht, "joyful", "holberton");
    hash_table_set(ht, "synaphea", "holberton");
    hash_table_set(ht, "redescribed", "urites");
    hash_table_set(ht, "dram", "holberton");
    hash_table_set(ht, "hetairas", "holberton");
    hash_table_set(ht, "mentioner", "holberton");
    hash_table_set(ht, "heliotropes", "neurospora");
    hash_table_set(ht, "depravement", "serafins");
    hash_table_set(ht, "stylist", "holberton");
    hash_table_set(ht, "joyful", "holberton");
    hash_table_set(ht, "synaphea", "holberton");
    hash_table_set(ht, "redescribed", "urites");
    hash_table_set(ht, "dram", "holberton");
    /*printf("pasa toda la function main\n");*/
    return (EXIT_SUCCESS);
}
