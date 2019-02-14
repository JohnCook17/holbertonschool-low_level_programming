#include "holberton.h"
/**
 * _isupper - determines if is upper
 * @c: to determine if is upper
 *
 * Description: if is upper returns 1, else returns 0
 * Return: returns 0 if not upper 1 if upper
 */
int _isupper(int c)
{
	char *p;
	int i;

	p = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		if (c  == p[i])
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
