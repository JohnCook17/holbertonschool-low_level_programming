#include "holberton.h"
/**
 * _memset - sets all mem values to char b
 * @s: memory to set.
 * @b: value to set to.
 * @n: size to set.
 *
 * Return: returns a pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] != '\0' || i != n; i++)
	{
		s[i] = b;
	}
	return (s);
}
