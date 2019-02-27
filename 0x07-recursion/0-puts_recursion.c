#include "holberton.h"

void helper(s)
{
        static int i;

        if (s[i] == '\0')
        {
                _putchar('\n');
                return;
        }
        _putchar(s[i]);
        i++;
        _puts_recursion(s);
}

/**
 * _puts_recursion - puts the string followed by a newline
 * @s: string
 *
 * Return: void, just used for base case.
 */
void _puts_recursion(char *s)
{
	helper(s);
}
