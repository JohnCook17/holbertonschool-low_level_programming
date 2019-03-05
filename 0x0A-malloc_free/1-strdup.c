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
	int len = 0;
	int j = 0;

	while (str[j] != '\0')
	{
		len++;
		j++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	p = malloc(len * sizeof(char) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
