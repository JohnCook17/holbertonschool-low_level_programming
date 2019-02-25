#include "holberton.h"
/**
 * _strstr - finds the needle in the haystack
 * @haystack: haystack string
 * @needle: needle string
 *
 * Return: return beginning of haystack where needle was found or if no match
 * return null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int match = 1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				match = 0;
				continue;
			}
			if (haystack[i] != needle[j])
			{
				match = 1;
			}
		}
		if (match == 0)
		{
			return (&haystack[i - j + 1]);
		}
	}
	if (needle == '\0')
	{
		return (&haystack[0]);
	}
	return ('\0');
}
