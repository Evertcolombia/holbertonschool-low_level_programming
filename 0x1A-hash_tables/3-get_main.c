#include "hash_tables_php.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;
    char *value;

    ht = shash_table_create(1024);
    shash_table_set(ht, "c", "fun");
    shash_table_set(ht, "python", "awesome");
    shash_table_set(ht, "Jennie", "and Jay love asm");
    shash_table_set(ht, "N", "queens");
    shash_table_set(ht, "Asterix", "Obelix");
    shash_table_set(ht, "Betty", "Holberton");
    shash_table_set(ht, "98", "Battery Street");
    shash_table_set(ht, "c", "isfun");

    value = shash_table_get(ht, "python");
    printf("%s:%s\n", "python", value);
    value = shash_table_get(ht, "Jennie");
    printf("%s:%s\n", "Jennie", value);
    value = shash_table_get(ht, "N");
    printf("%s:%s\n", "N", value);
    value = shash_table_get(ht, "Asterix");
    printf("%s:%s\n", "Asterix", value);
    value = shash_table_get(ht, "Betty");
    printf("%s:%s\n", "Betty", value);
    value = shash_table_get(ht, "98");
    printf("%s:%s\n", "98", value);
    value = shash_table_get(ht, "c");
    printf("%s:%s\n", "c", value);
    value = shash_table_get(ht, "javascript");
    printf("%s:%s\n", "javascript", value);
    return (EXIT_SUCCESS);
}
