#include "holberton.h"
/**
 * _strspn - finds chars accept in leading char of string
 * @s: string
 * @accept: chars to find in leading char of string
 *
 * Return: returns count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
		if (s[i] == ' ')
		{
			break;
		}
	}
	return (count);
}
