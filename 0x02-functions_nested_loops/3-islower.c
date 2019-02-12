#include "holberton.h"
/**
 * _islower - A function to determin if a char is lowercase
 * @c: an int to compare if its lower
 *
 *Description: A function to determin if a char is lowercase
 *Return: returns 1 if its a lowercase and 0 if not
 */
int _islower(int c)
{
	char *p;
	int i;

	p = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (c == p[i])
		{
			return (1);
		}
	}
	return (0);
}
