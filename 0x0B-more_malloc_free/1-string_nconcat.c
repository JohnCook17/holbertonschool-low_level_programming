#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat -concatinates n chars of string two to string one
 * @s1: string one
 * @s2: string two
 * @n: n chars to coppy
 *
 * Return: pointer to new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int j;
	int len1 = 0;
	char *p;

	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	p = malloc(len1 + n * sizeof(char) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
