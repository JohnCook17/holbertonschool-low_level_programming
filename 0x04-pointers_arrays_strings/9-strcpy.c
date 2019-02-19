#include "holberton.h"
/**
 * _strcpy - coppies a string to another string
 * @dest: destination
 * @src: sorce
 *
 * Return: returns the coppied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	char c;

	while (src[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		c = src[j];
		dest[j] = c;
		j++;
	}
	dest[j + 1] = '\0';
	return (dest);
}
