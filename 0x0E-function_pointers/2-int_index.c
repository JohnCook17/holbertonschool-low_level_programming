#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array
 * @size: size of array
 * @cmp: comparison function
 *
 * Return: index in array if found - 1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int res;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res > 0)
			return (i);
	}
	return (-1);
}
