#include "holberton.h"
/**
 * leet - 1337 s34k
 * @s: string to leet speak
 *
 * Return: returns the leet speak of the string.
 */
char *leet(char *s)
{
	char *letter = "aAeEoOtTlL";
	char *number = "4433007711";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = number[j];
			}
		}
		j = 0;
	}
	return (s);
}
