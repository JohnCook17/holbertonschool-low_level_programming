#include "holberton.h"
/**
 * string_toupper - string to CAPS
 * @s: string to CAPS
 *
 * Return: returns the string in CAPS
 */
char *string_toupper(char *s)
{
	int i;
	int j;
	char arr1[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 26; j++)
		{
			if (s[i] == arr2[j])
			{
				s[i] = arr1[j];
				j = 0;
			}
		}
		j = 0;
	}
	return (s);
}
