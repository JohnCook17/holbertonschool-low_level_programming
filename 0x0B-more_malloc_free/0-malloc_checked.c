#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory, exits if error
 * @b: size of memory to allocate
 *
 * Return: A pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
