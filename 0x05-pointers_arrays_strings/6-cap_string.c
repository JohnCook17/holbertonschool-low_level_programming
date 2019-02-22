#include "holberton.h"



/**
 * cap_string - string to CAPS
 * @s: string to CAPS
 *
 * Return: returns the string in CAPS
 */
char *cap_string(char *s)
{
	int i;
	int j;
	int k;
	char arr1[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char arr2[26] = "abcdefghijklmnopqrstuvwxyz";
	int isspace = 1;
	char space[13] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 26; j++)
		{
			if (s[0] == arr2[j])
			{
				s[0] = arr1[j];
			}
			for (k = 0; k <= 13; k++)
			{
				if (s[i] == space[k] && isspace == 1)
				{
					isspace *= -1;
					k = 13;
				}
			}
			if (isspace == -1 && ((s[i] == arr2[j]) || (s[i] == arr1[j])))
			{
				isspace = 1;
				s[i] = arr1[j];
			}
		}
	}
	return (s);
}
