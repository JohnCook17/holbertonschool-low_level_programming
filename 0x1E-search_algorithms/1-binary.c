#include "search_algos.h"
/**
 * print_array - prints the array
 * @array: the array to print
 * @r: the right end of the array
 * @l: the left end of the array
 */
void print_array(int *array, size_t r, size_t l)
{
	size_t i = l;

	while (i <= r)
	{
		if (i == l)
			printf("Searching in array: %d", array[i]);
		else
			printf(", %d", array[i]);
		i++;
	}
	printf("\n");
}
/**
 * binary_search - binary search algo
 * @array: the array to print
 * @size: the size of the array
 * @value: the value to find
 * Return: the index of the array the value is located at
 */
int binary_search(int *array, size_t size, int value)
{
	size_t r = size - 1;
	size_t l = 0;
	size_t m;

	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		print_array(array, r, l);
		m = (l + r) / 2;
		if (array[m] == value)
		{
			return (m);
		}
		else if (array[m] < value)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return (-1);
}
