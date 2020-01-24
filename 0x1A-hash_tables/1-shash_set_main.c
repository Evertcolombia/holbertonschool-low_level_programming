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
	printf("Table was created\n");
    shash_table_set(ht, "betty", "holberton");
    shash_table_set(ht, "hetairas", "holberton");
    shash_table_set(ht, "mentioner", "holberton");
    shash_table_set(ht, "heliotropes", "neurospora");
    shash_table_set(ht, "depravement", "serafins");
    shash_table_set(ht, "stylist", "holberton");
    shash_table_set(ht, "joyful", "holberton");
    shash_table_set(ht, "synaphea", "holberton");
    shash_table_set(ht, "redescribed", "urites");
    shash_table_set(ht, "dram", "holberton");
    shash_table_set(ht, "hetairas", "holberton");
    shash_table_set(ht, "mentioner", "holberton");
    shash_table_set(ht, "heliotropes", "neurospora");
    shash_table_set(ht, "depravement", "serafins");
    shash_table_set(ht, "stylist", "holberton");
    shash_table_set(ht, "joyful", "holberton");
    shash_table_set(ht, "synaphea", "holberton");
    shash_table_set(ht, "redescribed", "urites");
    shash_table_set(ht, "dram", "holberton");
    return (EXIT_SUCCESS);
}
