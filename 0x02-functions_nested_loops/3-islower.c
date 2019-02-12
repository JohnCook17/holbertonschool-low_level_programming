#include "holberton.h"

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
