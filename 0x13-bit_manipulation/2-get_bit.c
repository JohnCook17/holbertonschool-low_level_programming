#include "holberton.h"

/**
 * get_bit - gits the bit at the nth index
 * @n: number to get bit value from
 * @index: the index to get the bit from
 *
 * Return: the bit at the index, or -1 if it fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char res = 0;

	if (index > 31)
		return (-1);
	return (res = (n >> index) & 1);
}
