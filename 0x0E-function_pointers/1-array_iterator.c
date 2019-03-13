#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterates through an array applying a function
 * @array: array to iterate through
 * @size: size of array
 * @action: function to apply to array
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
