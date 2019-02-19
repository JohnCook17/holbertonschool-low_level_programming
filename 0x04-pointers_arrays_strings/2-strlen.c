#include "holberton.h"
/**
 * _strlen - finds the length of a string
 * @s: a string
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
