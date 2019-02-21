#include "holberton.h"
/**
 * _strncat - concatinates 2 strings with n bytes of the second string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to include of string src
 *
 * Return: returns the concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
