#include "holberton.h"

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: size of array
 *
 */
void reverse_array(int *a, int n)
{
	int c;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
		i++;
		j--;
	}
}
