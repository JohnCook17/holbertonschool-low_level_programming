#include "holberton.h"
/**
 * rev - reverses a string and prints it
 * @s: string to reverse
 * @i: increment
 *
 * Return: Returns when end of string is reached
 */
void rev(char *s, int i)
{
	if (s[i] == '\0')
	{
		return;
	}
	i++;
	rev(s, i);
	i--;
	_putchar(s[i]);
}
/**
 * print_rev - reverses a string
 * @s: string to reverse
 *
 */
void print_rev(char *s)
{
	int i = 0;

	rev(s, i);
	_putchar('\n');
}
