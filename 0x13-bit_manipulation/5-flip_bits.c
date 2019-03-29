#include "holberton.h"

/**
 * flip_bits -
 *
 * Return: 
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int temp;

	for (temp = n^m; temp != 0; temp = temp >> 1)
		count += temp & 1;
	return count;
}
