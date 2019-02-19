#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints n values of an array
 * @a: the array
 * @n: the number of values to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
