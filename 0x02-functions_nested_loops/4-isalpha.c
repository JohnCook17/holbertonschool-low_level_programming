#include "holberton.h"
/**
 * _isalpha - If alpha return 1
 * @c: int c to test if alpha
 *
 * Description: goes through the alphabet to detirmine if a int is alpha
 *Return: return 0 if not alpha, and 1 if is alpha
 */
int _isalpha(int c)
{
	char *p;
	int i;

	p = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		if (c == p[i])
		{
			return (1);
		}
	}
	return (0);
}
