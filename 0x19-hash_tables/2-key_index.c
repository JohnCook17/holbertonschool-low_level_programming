#include "hash_tables.h"
/**
 * key_index - gets the index of the key
 * @key: key to use
 * @size: of array
 * Return: the hash djb2 of key % size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
