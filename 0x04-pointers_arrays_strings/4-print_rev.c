#include "holberton.h"

void rev(char *s, int i)
{
	if (s[i] == '\0')
	{
		return;
	}
	i++;
	rev(s,i);
	i--;
	_putchar(s[i]);
}
void print_rev(char *s)
{
	int i = 0;

	rev(s, i);
	_putchar('\n');
}
