#include "holberton.h"
/**
 * rev - reverse a array
 * @a: array
 * @n: size of array
 *
 * Return: to keep in the array, if no return segmentation fault
 */
void rev(int *a, int n)
{
	static int i;
	static int j;
	int c;

	c = a[i];
	if (i == n || n == 0)
	{
		return;
	}
	i++;
	rev(a, n);
	i--;
	a[j] = c;
	j++;
}
/**
 * reverse_array - reverse an array
 * @a: array
 * @n: size of array
 *
 */
void reverse_array(int *a, int n)
{
	rev(a, n);
}
