#include "holberton.h"

/**
 * flip_bits - finds how many bits need to be fliped to change a number
 * @n: number 1
 * @m: number 2
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int temp;

	for (temp = n^m; temp != 0; temp = temp >> 1)
		count += temp & 1;
	return count;
}
