#include "holberton.h"
/**
 * rev - reverses the string and stores it
 * @s: string to reverse
 *
 */
void rev(char *s)
{
	static int i = 1;
	static int j = 1;
	char c;

	c = s[i - 1];
	if (s[i - 1] == '\0')
	{
		return;
	}
	i++;
	rev(s);
	i--;
	s[j - 1] = c;
	++j;

}
/**
 * rev_string - reverses string
 * @s: string to reverse
 *
 */
void rev_string(char *s)
{
	rev(s);
}
