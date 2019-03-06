#include <stdlib.h>
#include "holberton.h"
/**
 * argstostr - concatinates a string
 * @ac: size
 * @av: strings
 *
 * Return: return null if error, string if not
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i;
	int j;
	int k;
	int len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
		p = malloc(sizeof(char) * len + 1);
	}
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			p[k] = av[i][j];
		}
		p[k++] = '\n';
	}
	p[k] = '\0';
	return (p);
}
