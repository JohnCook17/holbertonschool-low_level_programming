#include "search_algos.h"

void print_array(int *array, size_t r, size_t l)
{
	size_t i = l;

	while (i < r)
	{
		if (i == l)
			printf("Searching in array: %d", array[i]);
		else
			printf(", %d", array[i]);
		i++;
	}
	printf("\n");
}
int my_binary_search(int *array, size_t l, size_t r, int value)
{
	size_t m = l + (r - l) / 2;

	if (r > l)
	{
		if (array[m] == value)
		{
			printf("found value\n");
			print_array(array, r, l);
			printf("returning now\n");
			return (m);
		}
		else if (array[m] < value)
		{
			print_array(array, r, l);
			return (my_binary_search(array, m + 1, r, value));
		}
		else if (array[m] > value)
		{
			print_array(array, r, l);
			return (my_binary_search(array, l, m - 1, value));
		}
	}
	return (-1);
}
int binary_search(int *array, size_t size, int value)
{
	size_t r = size;
	size_t l = 0;

	if (array == NULL)
		return (-1);
	return (my_binary_search(array, l, r, value));

}
