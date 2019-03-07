#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of ints starting with min and going to max
 * @min: the min value
 * @max: the max value
 *
 * Return: Pointer to array full of ints, if faills NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int num = min;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc((max - min) * sizeof(int) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; num <= max - min; i++)
	{
		p[i] = num++;
	}
	return (p);
}
