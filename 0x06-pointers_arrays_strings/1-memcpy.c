#include "holberton.h"
/**
 * _memcpy - coppies mem form dest to src.
 * @dest: destination
 * @src: source
 * @n: size to coppy
 *
 * Return: Returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; dest[i] != '\0' || i != n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
