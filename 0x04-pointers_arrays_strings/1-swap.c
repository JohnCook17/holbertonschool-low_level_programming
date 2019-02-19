#include "holberton.h"
/**
 * swap_int - Swaps two ints
 * @a: int 1
 * @b: int 2
 *
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
