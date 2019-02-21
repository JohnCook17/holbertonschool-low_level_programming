#include "holberton.h"
/**
 * _strncpy - coppies a string
 * @dest: destination string
 * @src: source string
 * @n: how much to coppy
 *
 * Return: returns the modified dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
