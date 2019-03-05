#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(str));
	if (p == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
