#include "holberton.h"
/**
 * _strcat - concatinates two strings together
 * @dest: destination string
 * @src: source string
 *
 * Return: returns the modified destination string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
