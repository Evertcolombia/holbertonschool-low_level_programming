#include "hash_tables.h"

/**
 * key_index - functin that gives yo the key of a index
 * @key:  key to convert with hash_djb2 function
 * @size: size of hash table
 *
 * Return: hash
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
