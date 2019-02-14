#include "holberton.h"
/**
 * _isdigit - determines if the input is a digit
 * @c: int to be tested
 *
 * Description: if not digit, returns 0
 * Return: if digit returns 1, else 0
 */
int _isdigit(int c)
{
	char *p;
	int i;

	p = "0123456789";
	for (i = 0; i <= 10; i++)
	{
		if (c == p[i])
		{
			return (1);
		}
	}
	return (0);
}
