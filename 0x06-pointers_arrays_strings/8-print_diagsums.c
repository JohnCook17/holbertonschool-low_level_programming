#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - adds the diagonal summs of an array
 * @a: array
 * @size: size of array
 *
 */
void print_diagsums(int *a, int size)
{
	int row;
	int *num;
	int numsum = 0;

	for (row = 0; row < size; row++)
	{
		num = a + (size + 1) * row;
		numsum += *num;
	}
	printf("%d, ", numsum);
	for (row = 1, numsum = 0; row - 1 < size; row++)
	{
		num = a + (size - 1) * row;
		numsum += *num;
	}
	printf("%d\n", numsum);
}
