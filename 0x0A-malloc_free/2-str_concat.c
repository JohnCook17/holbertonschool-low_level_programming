#include <stdlib.h>
#include "holberton.h"

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int j = 0;

	p = malloc(sizeof(s1) + sizeof(s2) -1);
	if (p == NULL)
	{
		return (NULL);
	}
	while(s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while(s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i+1] = '\0';
	return (p);
}
