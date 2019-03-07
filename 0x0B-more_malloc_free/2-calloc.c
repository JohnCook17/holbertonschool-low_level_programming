#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - Works the same as calloc
 * @nmemb: number of members
 * @size: size of members
 *
 * Return: pointer to array if success else NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
