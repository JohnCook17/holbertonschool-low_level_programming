#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - duplicates a string
 * @str: string to copy
 *
 * Return: returns pointer to start of string.
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(sizeof(str));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
