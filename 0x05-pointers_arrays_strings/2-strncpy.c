#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - coppies a string
 * @dest: destination string
 * @src: source string
 * @n: how much to coppy
 *
 * Description: I addmit that I had to look at the man page source code for this
 * I could not figure out the null padding on my own, so I used google, but I
 * thoughly understand it now.
 * Return: returns the modified dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *d = dest;
	char *s = src;

	if (n != 0)
	{
		do {
			if ((*d++ = *s++) == 0)
			{
				while (--n != 0)
				{
					*d++ = 0;
				}
				break;
			}
		} while (--n != 0);
	}
	return (dest);
}
