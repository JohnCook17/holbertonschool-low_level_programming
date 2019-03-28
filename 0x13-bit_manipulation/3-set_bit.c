#include "holberton.h"

/**
 * set_bit - sets the nth bit to on
 * @n: number to set nth bit of
 * @index: nth bit to set
 *
 * Return: the value with the nth bit turned on, or -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return (*n |= 1UL << index);
}
