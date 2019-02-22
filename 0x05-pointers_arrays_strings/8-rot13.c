#include "holberton.h"
/**
 * rot13 - rot13 encryption
 * @s: string to rot13
 *
 * Return: returns rot13
 */
char *rot13(char *s)
{
	char *alpha_ = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *cipher = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == alpha_[j])
			{
				s[i] = cipher[j];
				j = 52;
			}
		}
	}
	return (s);
}
