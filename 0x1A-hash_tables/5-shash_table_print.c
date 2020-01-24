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
    shash_table_print(ht);
    shash_table_set(ht, "c", "fun");
    printf("set : c, fun\n");
    shash_table_set(ht, "python", "awesome");
    printf("set : python, awesome\n");
    shash_table_set(ht, "Jennie", "and Jay love asm");
    printf("set: jennie, and jay love ...\n");
    shash_table_set(ht, "N", "queens");
    printf("set : n, queens\n");
    shash_table_set(ht, "Asterix", "Obelix");
    printf("set : Asterix, Obelix\n");
    shash_table_set(ht, "Betty", "Holberton");
    printf("set : Betty, Holberton\n");
    shash_table_set(ht, "98", "Battery Street");
    printf("set : 98, battery estreet\n");
    shash_table_print(ht);
    return (EXIT_SUCCESS);
}
