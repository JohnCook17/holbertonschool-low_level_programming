#include "holberton.h"

/**
 * clear_bit - sets a bit to 0 at a given index
 * @n: number to change bits of
 * @index: the index to change bits at
 *
 * Return: 1 if success, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
