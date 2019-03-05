#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creates an array and inits values to char
 * @size: size of array to make
 * @c: char to init to
 *
 * Return: returns pointer to start of array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
