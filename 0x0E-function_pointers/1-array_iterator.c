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

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
