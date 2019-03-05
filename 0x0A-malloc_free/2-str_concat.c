#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatinates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: returns null if error, pointer to start of cat string if pass
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int j = 0;

	p = malloc(sizeof (char) * (sizeof(s1) + sizeof(s2) - 1));
	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i + 1] = '\0';
	return (p);
}
