#include "search_algos.h"

/**
 * linear_search - linear search
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to search for
 * Return: array index if found, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
		i++;
	}
	return (-1);
}
