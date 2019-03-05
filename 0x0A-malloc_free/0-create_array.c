#include <stdlib.h>
#include "holberton.h"

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = (char*)malloc( sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
